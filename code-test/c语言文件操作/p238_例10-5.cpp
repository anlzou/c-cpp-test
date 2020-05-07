/*
	4、格式化读写
	fscanf(文件指针，格式字符串，输入列表);
	fprintf(文件指针，格式字符串，输入列表);
	例如：
	fscanf(fp,"%d%c",&i,&ch);
	fprintf(fp,"%d%s",j,str);
	
	10.3.4文件缓存区操作
	1、缓存清除函数（两个） 
	int ffllush(FILE *stream);	//将清除除由指针stream指向的文件缓存区里的内容，常用于写完一些数据后，立即用该函数清除缓存区，已免误操作时，破坏原来的数据。 
	int flushall(); 	// 清除应用程序打开的所有文件所对应的文件缓存区。
	
	2、文件缓存区的设置（两个） 
	void setbuf(FILE *stream,char *buff);
	void sevtbuf(FILE *stream,char *buf,int type,unsigned size);
*/

#include<stdio.h>
char inbuf[BUFSIZ];
int main(void)
{
	char a[100];
	setbuf(stdin,inbuf);
	printf("Input a string=");
	scanf("%s",a);
	puts(inbuf);	//往缓存区写入数据 
	if(0==flushall())		//清空文件缓存区		？？？未成功 
	{
		puts(inbuf);
	}
	return 0;
}

