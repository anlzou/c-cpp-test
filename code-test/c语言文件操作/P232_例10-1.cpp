#include<stdio.h>
//�ļ���δ�ɹ� 
#include<stdlib.h>
const char FILE_NAME[]="\\C:\\Users\\anlzou\\Desktop\\C����\\c�����ļ�����\\input.txt";		//const:��������ʼ���󲻸ı� 
int main()
{
	int count=0;
	FILE *in_file;
	int ch;
	in_file=fopen(FILE_NAME,"r");
	if(in_file==NULL)
	{
		printf("Cannot open %s\n",FILE_NAME);
		exit(1);
	}
	while(1)
	{
		ch=fgetc(in_file);
		if(ch==EOF)
		break;
		++count;
	}
	printf("Number of characters in %s %d\n",FILE_NAME,count);
	fclose(in_file);
	return 0;
}
