//#include <stdafx.h>
#include<complex.h>
#include<stdio.h>

#include <cstdio>

#include <cstdlib>

#include <complex.h>

#include <iostream>

using namespace std;

/*设置生成图片的宽度和高度(单位：像素)和RGB颜色数值的最大值*/
#define width_size      (1024)

#define height_size     (768)

#define Maxval          255

//#define char int


/*设置图像原点的坐标，会影响生成的曼德勃罗集图象在整个文件中的位置*/
static const float orig_x = width_size * 2 / 3;
static const float orig_y = height_size * 1 / 2;

/*用来向生成的图片文件中写入RGB颜色数值，下标0, 1, 2分别对应红色、绿色、蓝色的值*/
unsigned char color[3];
/*定义“灰色”，即曼德勃罗集图像内部的固定颜色*/
static const unsigned char dim_gray[3] = { 135,155,175 };


/*迭代函数，用来判断一个点是否在曼德勃罗集内部*/
static unsigned char iteration(int x, int y)
{
	/*设置迭代次数上限，设置得太小会导致迭代不够精确，太大则会导致运行太慢*/
	const int limit = Maxval + 1;
	int i;

	/*

	_Dcomplex类型包含于头文件complex.h中，用于定义一个实部、虚部均为double型变量的复数

	_Cbuild()函数有两个double型参数，会将两个参数作为实部和虚部的值，返回值为_Dcomplex型

	这两行的作用是创建两个复数c, z；其中c的值由点的x, y坐标确定，z的初值为0

	*/
	_Dcomplex c = _Cbuild((x - orig_x) / (width_size / 3), ((orig_y - y) / (height_size / 2)));
	_Dcomplex z = _Cbuild(0, 0);

	/*

	迭代部分，

	由于_Dcomplex貌似没有定义乘法和加法运算，所以就自己写了一句……

	_Dcomplex类型内部的_Val数组大小为2，类型为double，下标0, 1分别表示这个复数的实部和虚部

	所以那一行的意思就是z = z * z + c;

	*/
	for (i = 0; i < limit; i++) {
		z = _Cbuild(z._Val[0] * z._Val[0] - z._Val[1] * z._Val[1] + c._Val[0], 2 * z._Val[0] * z._Val[1] + c._Val[1]);
		if (abs(creal(z)) > 2 || abs(cimag(z)) > 2)
			break;
	}

	/*若该点收敛，返回0；若该点发散，返回迭代次数*/
	return (unsigned char)(i == limit ? 0 : i);
}


int main()
{
	/*向文件mandelbrot.ppm中写入数据*/
	FILE *f = fopen("mandelbrot.ppm", "w+");

	/*ppm文件的文件头*/
	fprintf(f,
		"P6\n"						/*ppm文件的magic number，表明文件格式类型*/
		"#Mandelbrot Set\n"			/*注释，会被文件忽略*/
		"%d "						/*ppm文件的宽度*/
		"%d "						/*ppm文件的高度*/
		"%d ",						/*颜色数值上限*/
		width_size, height_size, Maxval);

	/*对每一个像素，先用迭代函数求出该点的收敛/发散情况*/
	int i, j;
	//int count;

	for (i = 0; i < height_size; i++) {
		for (j = 0; j < width_size; j++) {
			/*变量iter表示迭代次数*/
			unsigned char iter = iteration(j, i);

			/*若该点发散，按迭代次数分层并赋予递增的蓝值*/
			if (iter)
			{
				if (iter >= 0 && iter <= 2)
					color[2] = (unsigned char)(50);
				else if (iter > 2 && iter <= 5)
					color[2] = (unsigned char)(100);
				else if(iter > 5 && iter <= 8)
					color[2] = (unsigned char)(150);
				else if (iter > 8 && iter <= 15)
					color[2] = (unsigned char)(200);
				else
					color[2] = (unsigned char)(225);
			
					fwrite(color, 1, sizeof(color), f);
			}

			/*若该点收敛，则写入预设的灰色数值*/
			else {
				fwrite(dim_gray, 1, sizeof(color), f);
			}
		}
	}

	fclose(f);
	std::cout << "Done" << std::endl;
	return 0;
}
