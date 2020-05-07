//头文件

//头文件结构体声明 
typedef struct
{
	short leve1;
	unsigned flags;
	char fd;
	unsigned char hold;
	short bsize;
	unsigned char *buffer;
	unsigned char *curp;
	unsigned istemp;
	short token;
}FILE;

//文件的打开
/*
	lile_variable = fopen(name,mode);
	
	例如：
	FILE *fp1;
	fp1=fopen("file1.txt","r"); //p230
*/ 

//文件的关闭
/* 
	FILE *file_variable;
	...
	int status;
	status=fclose(file_variable);
	if(status)
	{
		printf("File cannot be close\n");
		exit(1);	//为1关闭失败 
	}
*/

//文件的读写
/*
	ch=fgetc(fp);
*/ 
