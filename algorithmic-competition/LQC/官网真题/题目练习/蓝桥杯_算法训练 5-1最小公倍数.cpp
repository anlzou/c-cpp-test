#include<stdio.h>
#include<math.h>
int main()
{
	int a,b;  //两个数都小于65536
	int t,k;
	int l;
	scanf("%d%d",&a,&b);
	l=a*b;
	if(a>b)
	{
		k=a;
		a=b;
		b=k;
	}
	for(;;)
	{
		if(a==0)
		{
			printf("%d",l/b);
			goto A;
		}
		else if(a>b)
		{
			break;
		}
		t=a;
		a=b%a;
		b=t;
	}
	printf("%d",l);
	A:
	return 0;
}
