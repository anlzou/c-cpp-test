//������ 2��������16����λ����ƴ�ӳ�һ��32����λ������ 

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
