#include<stdio.h>
int main()
{
	int i,x,y,z=1;
	printf("��������������x��y(x^y):\n");
	scanf("%d%d",&x,&y);
	for(i=1;i<=y;i++)
	{
		z=z*x%1000;
	}
	if(z>=100)
	{
		printf("%d^%d�������λ�ǣ�%d\n",x,y,z);
	}
	else
	{
		printf("%d^%d�������λ�ǣ�0%d\n",x,y,z);
	}
	return 0;
} 
