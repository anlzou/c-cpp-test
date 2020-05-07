#include<stdio.h>
#include"p240_Àý10-8.h"

int main()
{
	char stu_name[10];
	FILE *fp;
	if((fp=fopen("student.dat","ab+"))==NULL)
	{
		printf("Cannot open out file!\n");
	}
	printf("Name:\n");
	while(fread(stu_name,10,1,fp))
	{
		printf("%s\n",stu_name);
		fseek(fp,42L,1);
	}
	printf("\n");
	return 0;
} 
