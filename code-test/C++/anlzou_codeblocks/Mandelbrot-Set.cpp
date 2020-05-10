//#include <stdafx.h>
#include<complex.h>
#include<stdio.h>

#include <cstdio>

#include <cstdlib>

#include <complex.h>

#include <iostream>

using namespace std;

/*��������ͼƬ�Ŀ�Ⱥ͸߶�(��λ������)��RGB��ɫ��ֵ�����ֵ*/
#define width_size      (1024)

#define height_size     (768)

#define Maxval          255

//#define char int


/*����ͼ��ԭ������꣬��Ӱ�����ɵ����²��޼�ͼ���������ļ��е�λ��*/
static const float orig_x = width_size * 2 / 3;
static const float orig_y = height_size * 1 / 2;

/*���������ɵ�ͼƬ�ļ���д��RGB��ɫ��ֵ���±�0, 1, 2�ֱ��Ӧ��ɫ����ɫ����ɫ��ֵ*/
unsigned char color[3];
/*���塰��ɫ���������²��޼�ͼ���ڲ��Ĺ̶���ɫ*/
static const unsigned char dim_gray[3] = { 135,155,175 };


/*���������������ж�һ�����Ƿ������²��޼��ڲ�*/
static unsigned char iteration(int x, int y)
{
	/*���õ����������ޣ����õ�̫С�ᵼ�µ���������ȷ��̫����ᵼ������̫��*/
	const int limit = Maxval + 1;
	int i;

	/*

	_Dcomplex���Ͱ�����ͷ�ļ�complex.h�У����ڶ���һ��ʵ�����鲿��Ϊdouble�ͱ����ĸ���

	_Cbuild()����������double�Ͳ������Ὣ����������Ϊʵ�����鲿��ֵ������ֵΪ_Dcomplex��

	�����е������Ǵ�����������c, z������c��ֵ�ɵ��x, y����ȷ����z�ĳ�ֵΪ0

	*/
	_Dcomplex c = _Cbuild((x - orig_x) / (width_size / 3), ((orig_y - y) / (height_size / 2)));
	_Dcomplex z = _Cbuild(0, 0);

	/*

	�������֣�

	����_Dcomplexò��û�ж���˷��ͼӷ����㣬���Ծ��Լ�д��һ�䡭��

	_Dcomplex�����ڲ���_Val�����СΪ2������Ϊdouble���±�0, 1�ֱ��ʾ���������ʵ�����鲿

	������һ�е���˼����z = z * z + c;

	*/
	for (i = 0; i < limit; i++) {
		z = _Cbuild(z._Val[0] * z._Val[0] - z._Val[1] * z._Val[1] + c._Val[0], 2 * z._Val[0] * z._Val[1] + c._Val[1]);
		if (abs(creal(z)) > 2 || abs(cimag(z)) > 2)
			break;
	}

	/*���õ�����������0�����õ㷢ɢ�����ص�������*/
	return (unsigned char)(i == limit ? 0 : i);
}


int main()
{
	/*���ļ�mandelbrot.ppm��д������*/
	FILE *f = fopen("mandelbrot.ppm", "w+");

	/*ppm�ļ����ļ�ͷ*/
	fprintf(f,
		"P6\n"						/*ppm�ļ���magic number�������ļ���ʽ����*/
		"#Mandelbrot Set\n"			/*ע�ͣ��ᱻ�ļ�����*/
		"%d "						/*ppm�ļ��Ŀ��*/
		"%d "						/*ppm�ļ��ĸ߶�*/
		"%d ",						/*��ɫ��ֵ����*/
		width_size, height_size, Maxval);

	/*��ÿһ�����أ����õ�����������õ������/��ɢ���*/
	int i, j;
	//int count;

	for (i = 0; i < height_size; i++) {
		for (j = 0; j < width_size; j++) {
			/*����iter��ʾ��������*/
			unsigned char iter = iteration(j, i);

			/*���õ㷢ɢ�������������ֲ㲢�����������ֵ*/
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

			/*���õ���������д��Ԥ��Ļ�ɫ��ֵ*/
			else {
				fwrite(dim_gray, 1, sizeof(color), f);
			}
		}
	}

	fclose(f);
	std::cout << "Done" << std::endl;
	return 0;
}
