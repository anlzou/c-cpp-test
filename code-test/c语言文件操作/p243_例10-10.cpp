/*
	//�ļ��ļ��
	1���ļ�������⺯��feof()	
		feof(�ļ�ָ��);
	2��	��д�ļ������⺯��ferror()
		ferror(�ļ�ָ��);
	3���ļ������־���ļ�������־��0����clearerr()
		clearerr(�ļ�ָ��); 
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
 
