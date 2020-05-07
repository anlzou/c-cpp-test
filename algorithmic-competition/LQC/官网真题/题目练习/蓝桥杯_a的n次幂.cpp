#include<stdio.h>
int f(int a, int n)
{
	int x=1;
	for(int i=0; i<n; i++)
		x *= a;
		return x;
}
int main()
{
	int x,y;
	scanf("%d %d",&x,&y);
	int z = f(x, y);
	printf("%d",z);
	return 0;
} 
