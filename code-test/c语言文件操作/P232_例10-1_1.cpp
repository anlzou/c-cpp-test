//文件打开未成功 
#include<stdio.h>
#include<stdlib.h>
//const char FILE_NAME[]="C:\Users\anlzou\Desktop\C语言\c语言文件操作\input.txt";		//const:常量，初始化后不改变 
int main()
{
	int count=0;
	FILE *in_file;
	int ch;
	in_file=fopen("C:\\Users\anlzou\Desktop\C语言\c语言文件操作\input.txt","r");
	if(in_file==NULL)
	{
		printf("Cannot open %s\n","C:\\Users\anlzou\Desktop\C语言\c语言文件操作\input.txt");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(in_file);
		if(ch==EOF)
		break;
		++count;
	}
	printf("Number of characters in %s %d\n","C:\\Users\anlzou\Desktop\C语言\c语言文件操作\input.txt",count);
	fclose(in_file);
	return 0;
}
