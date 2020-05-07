#include<stdio.h>
int len(int x)
{
	if(x<10) return 1;
	return len(x/10)+1;
}

void fun(int n,int &data)
{
	int x;
	int i=0;
	while(n>0)
	{
		x=n%10;
		data[i]=x;
		i++;
		n=x;
	}
}

void fun_p(int i,int &data)
{
	printf("%d ",data[i]);	
}
int main()
{
	int data[10];
	int n;
	int i;
	scanf("%d",&n);
	fun(n,data[]);
		for(i=0;i<len(n);i++)
			fun_f(i,data[]);
	return 0;
}
