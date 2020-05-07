/*
	//文件的监控
	1、文件结束检测函数feof()	
		feof(文件指针);
	2、	读写文件出错检测函数ferror()
		ferror(文件指针);
	3、文件出错标志和文件结束标志置0函数clearerr()
		clearerr(文件指针); 
*/

#include<stdio.h>
int main()
{
	FILE *fp;
	char ch,fname[10],err_flag=0;
	printf("\nEnter a filename:");
	scanf("%s",fname);
	if((fp=fopen(fname,"w"))==NULL)
	{
		printf("Cannot open out file\n");
	}
	while((ch=getchar())!='#')
	{
		fputc(ch,fp);
		if(ferror(fp))
		{
			err_flag=1;
			break;
		}
		putchar(ch);
	}
	if(err_flag)
		printf("\nWrite disk err!\n");
	else
		printf("\nO.K!\n"); 
	return 0;
} 
 
