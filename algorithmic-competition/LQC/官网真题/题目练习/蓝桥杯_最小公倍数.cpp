#include<stdio.h>

//普通方法
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

//高级方法_公式法、在填空题中出现 
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
