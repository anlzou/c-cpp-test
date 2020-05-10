#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	a=a&0xAAAA;
	printf("a=%d",a);
	return 0;
} 
