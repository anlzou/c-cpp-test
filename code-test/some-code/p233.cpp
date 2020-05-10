#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char ch;
	if((fp=fopen("file.txt","w"))==NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}
	printf("Input the char:\n");
	while(ch!='#')
	{
		ch=getchar();
		fputc(ch,fp);
	}
	fclose(fp);
	if((fp=fopen("file.txt","r"))==NULL)
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
