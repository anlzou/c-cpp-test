#include<stdio.h>

//��ͨ����
int f(int x, int y)
{
	for(int i=1; i<=100; i++)
	{
		if(x*i%y == 0)
		{
			return x*i;
			break;
		}
	}
} 

//�߼�����_��ʽ������������г��� 
//x * y / gcd(x, y);

int f(int x, int y)
{
	
} 
int main()
{
	int x,y;
	scanf("%d %d",&x, &y);
	int z = f(x,y);
	printf("%d",z);
	return 0;
}
