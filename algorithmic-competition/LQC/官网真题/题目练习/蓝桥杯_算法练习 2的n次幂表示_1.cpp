#include <stdio.h>
void fun(unsigned int n)
{
	int i;
	unsigned int mask = 0x80000000;
	unsigned int bitvalue;
for(i=sizeof(unsigned int)*8-1; i>=0; i--)//i=15; 
{
	bitvalue = n & mask;
	if(bitvalue)
	{
		if(bitvalue==2)
		{
			printf("2");
		}
		else if(bitvalue==1)
		{
			printf("2(0)");
		}
		else
		{
			printf("2(");
			fun(i);
			printf(")");
		}
		if(i && n&(mask-1))
		{
			printf("+");
		}
	}
	mask>>=1;
}
}
int main()
{
	int n;
	scanf("%d", &n);
	if(!(n>=1 && n<=20000))
{
	return 1;
}
	fun((unsigned int)n);
	printf("\n");
	return 0;
}
