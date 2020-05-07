//标题： 啤酒和饮料
//啤酒每罐2.3，饮料每罐1.9元。买若干啤酒和饮料，一共花了82.3元。 
//问：啤酒和饮料各多少？ 
#include<stdio.h>
int main()
{
	for(int i=0; i<100; i++)
		for(int j=0; j<100; j++)
			if(23*i + 19*j == 823)
			printf("%d %d \n",i,j);
	return 0;
} 
