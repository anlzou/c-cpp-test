#include<stdio.h>
void print_2(int val2)
{
	int i;
	for (i = 4; i >= 0; i--)
	{
	if(val2 & (1 << i))
	printf("1");
	else
	printf("0");
	}
}
int main()
{
	int i;
	for(i = 0; i < 32; i++)
	{
	print_2(i);
	printf("\n");
	}
	return 0;
}
