#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,j;
	int a;
	printf("����һ���ַ�����");
	gets(str);
	a=strlen(str);
	for(i=0,j=a-1;i<j;i++,j--)
	if(str[i]!=str[j])
	{
	printf("���ǡ�");
	goto A;
	}
	printf("�ǡ�");
	A:
	return 0;
} 
