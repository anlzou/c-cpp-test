//文件的随机读写-获取问价指针的当前位置
/*
	long ftell(FILE *stream);
	int rewind(FILE *stream);
	int fseek(FILE *stream,long offset,int origin); 
*/
#include<stdio.h>
int main()
{
	FILE *stream;
	stream=fopen("MYFILE.txt","w+");
	fprintf(stream,"This is a test");
	printf("The file pointer is at byte %ld\n",ftell(stream));
	fclose(stream);
	return 0;
}
 
