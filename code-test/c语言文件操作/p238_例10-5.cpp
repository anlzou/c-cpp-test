/*
	4����ʽ����д
	fscanf(�ļ�ָ�룬��ʽ�ַ����������б�);
	fprintf(�ļ�ָ�룬��ʽ�ַ����������б�);
	���磺
	fscanf(fp,"%d%c",&i,&ch);
	fprintf(fp,"%d%s",j,str);
	
	10.3.4�ļ�����������
	1��������������������� 
	int ffllush(FILE *stream);	//���������ָ��streamָ����ļ�������������ݣ�������д��һЩ���ݺ������øú�����������������������ʱ���ƻ�ԭ�������ݡ� 
	int flushall(); 	// ���Ӧ�ó���򿪵������ļ�����Ӧ���ļ���������
	
	2���ļ������������ã������� 
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
	puts(inbuf);	//��������д������ 
	if(0==flushall())		//����ļ�������		������δ�ɹ� 
	{
		puts(inbuf);
	}
	return 0;
}

