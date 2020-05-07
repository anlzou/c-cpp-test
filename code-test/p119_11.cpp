#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	int i,j;
	int a;
	printf("输入一个字符串：");
	gets(str);
	a=strlen(str);
	for(i=0,j=a-1;i<j;i++,j--)
	if(str[i]!=str[j])
	{
	printf("不是。");
	goto A;
	}
	printf("是。");
	A:
	return 0;
} 
