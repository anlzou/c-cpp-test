//�ļ���δ�ɹ� 
#include<stdio.h>
#include<stdlib.h>
//const char FILE_NAME[]="C:\Users\anlzou\Desktop\C����\c�����ļ�����\input.txt";		//const:��������ʼ���󲻸ı� 
int main()
{
	int count=0;
	FILE *in_file;
	int ch;
	in_file=fopen("C:\\Users\anlzou\Desktop\C����\c�����ļ�����\input.txt","r");
	if(in_file==NULL)
	{
		printf("Cannot open %s\n","C:\\Users\anlzou\Desktop\C����\c�����ļ�����\input.txt");
		exit(1);
	}
	while(1)
	{
		ch=fgetc(in_file);
		if(ch==EOF)
		break;
		++count;
	}
	printf("Number of characters in %s %d\n","C:\\Users\anlzou\Desktop\C����\c�����ļ�����\input.txt",count);
	fclose(in_file);
	return 0;
}
