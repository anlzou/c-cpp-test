//ͷ�ļ�

//ͷ�ļ��ṹ������ 
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

//�ļ��Ĵ�
/*
	lile_variable = fopen(name,mode);
	
	���磺
	FILE *fp1;
	fp1=fopen("file1.txt","r"); //p230
*/ 

//�ļ��Ĺر�
/* 
	FILE *file_variable;
	...
	int status;
	status=fclose(file_variable);
	if(status)
	{
		printf("File cannot be close\n");
		exit(1);	//Ϊ1�ر�ʧ�� 
	}
*/

//�ļ��Ķ�д
/*
	ch=fgetc(fp);
*/ 
