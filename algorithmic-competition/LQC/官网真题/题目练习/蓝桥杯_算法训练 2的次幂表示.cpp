//δ��� 
#include<stdio.h>
#include<math.h>
int main()
{
	int n;  //��������1<=n<=20000��
	int a[5],b[5],c[5],d[5];
	int i=0;
	do
	{
		scanf("%d",&n);
	}
	while(n<1||n>20000);
	while(n)//���������λ��������������λ���� 
	{
		a[i++]=n%10;
		n/=10;
		b[i-1]=log10(a[i-1])/log10(2); //2(n)��һ������2��n���� 
		while(b[i-1])//���������λ��������������λ���� 
		{
		c[i++]=b[i-1]%10;
		b[i-1]/=10;
		d[i-1]=log10(c[i-1])/log10(2); //2(n)��һ������2��n���� 
		//printf("%d\n",b[i-1]);
		}
		//printf("%d\n",b[i-1]);
	}
	return 0;
} 
