#include<stdio.h>
#include<math.h>
//普通方法 
//int f(int x, int y)
//{
//	for(int i=x; i>1; i--)
//	if(x%i==0 && y%i==0)
//	{
//	return i;
//	break;
//	}
//}

//辗转相除法 
int f(int x, int y)
{
	while(1)
	{
		if(x==0)
		{
			return y;//y==max_; x==0;
			break;
		}
		int t = x;
		x = y%x;
		y = t;
	}	
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int z = f(x,y);
	printf("%d",z);
	return 0;
} 


