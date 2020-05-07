//error
#include<stdio.h>
int main()
{
	long long N;
	long long x;
	do
	{
	scanf("%d",&N);
	}while(N<1||N>1000000);
	if(N<3)
		x=N;
	else 
	{
	if(N%2!=0)
		x=N*(N-1)*(N-2);
	else if(N%3!=0)
		x=N*(N-1)*(N-3);
	else
		x=(N-1)*(N-2)*(N-3);
	}
	printf("%d",x);
	return 0;
}
