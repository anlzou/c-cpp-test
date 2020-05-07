//【任务 2】将两个16比特位的数拼接成一个32比特位的数。 

#include<stdio.h>
long CatenateBists16(short sHBits, short sLBits)
{
	long Num32Bit = 0;
	Num32Bit = sHBits;
	Num32Bit <<= 16;
	Num32Bit &= 0xffff0000;
	Num32Bit |= (long)sLBits;
	return Num32Bit; 
} 

int main()
{
	short sHBits,sLBits;
	scanf("%d%d",&sHBits, &sLBits);
	long result = CatenateBists16(sHBits, sLBits);
	printf("%d\n",result);
	return 0;
}
