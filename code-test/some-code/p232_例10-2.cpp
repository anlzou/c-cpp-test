//文件的读写
 /*
	ch=fgetc(fp);  //字符函数从指定文件中读一个字符 
	fputc(ch,fp);  //字符文件的操作通过fputc函数实现 
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file","w"))==NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}
	printf("Iput the char:\n");
	while(ch!='#')
	{
		ch=getchar();
		fputc(ch,fp);
	}
	fclose(fp);
	if((fp=fopen("file","r"))==NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}
	printf("The output is:\n");		
	ch=fgetc(fp);
	while(ch!=EOF)
	{
		putchar(ch);
		ch=fgetc(fp);
	}
		fclose(fp);
	return 0;
} 
