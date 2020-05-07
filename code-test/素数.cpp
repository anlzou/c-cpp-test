//Î´Íê³É 
#include<stdio.h>
int f(int x)
{
	if(x==2)
		return true;
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}
int main()
{
	int i;
	for(i=1; i<4000; i++)
		if(f(i) == true && i<1000)
		printf("%3d ",i);
		else if(f(i) == true && i>1000)
		printf("%7d ",i);
	return 0;
} 
