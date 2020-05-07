#include<stdio.h>
int main()
{
	int a,b,c;
	int i;
	int x;
	for(i=100;i<1000;i++)
	{
		a=i/100;
		b=i%100/10;
		c=i%100%10/1;
		x=a*a*a+b*b*b+c*c*c;
		if(x==i)
		printf("%d ",x);
	}
	return 0;
} 
