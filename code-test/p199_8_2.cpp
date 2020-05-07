#include<stdio.h>
int main()
{
	char c[10];
	char *pc;
	int i,j,k;
	do
	{
		c[i++]=getchar(); //i.end==10;
	}while(i<10);
	for(j=0;j<i;j++)//求最大的数 
		for(k=j;k<i;k++) 
	return 0;
} 
