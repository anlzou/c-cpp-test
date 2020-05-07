#include<stdio.h>
	void print_2(int val2){
	unsigned char *p = (unsigned char*)&val2 + 3; //从低位到高位,低端字节计算机
	for(int k = 0; k <= 3; k++)
{
	int val2 = *(p-k);
	for (int i = 7; i >= 0; i--)
	{
	if(val2 & (1 << i))
	printf("1");
	else
	printf("0");
	}
	printf(" ");
}
}
int main()
{
	int i;
	for(i=0;i<32;i++)
	{
	printf("%2d      ",i);
	print_2(i);
	printf("\n");
	}
	return 0;
}
