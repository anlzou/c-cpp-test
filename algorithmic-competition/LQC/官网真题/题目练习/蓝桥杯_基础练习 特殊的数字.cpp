#include<stdio.h>
int main()
{
	int a,b,c;
	int d;
	int i=100;
	for(i;i<1000;i++)
	{
		a=i/100;//百位 
		b=i%100/10;//十位 
		c=i%100%10;//个位
		d=a*a*a+b*b*b+c*c*c;
		if(d==i)
		{
			printf("%d\n",i);
		} 
	}
	return 0;
}
