#include<stdio.h>
int main()
{
	int x;
	int i=0,j;
	int a[5];
	printf("输入一个五位数：");
	scanf("%d",&x);
	while(x)
	{
		a[i++]=x%10;
		x/=10;
	}
	for(j=0;j<i;j++,i--)
	{
	if(a[i-1]!=a[j])
	{
	printf("不是。");
	goto A;
    }
	}
	printf("是。"); 
	A:
	getchar(); 
	getchar(); 
	return 0;
}
