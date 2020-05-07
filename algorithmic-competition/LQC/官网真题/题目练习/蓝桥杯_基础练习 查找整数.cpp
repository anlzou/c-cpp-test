#include<stdio.h>
int main()
{
	int n;
	int x;
	int i;
	int data[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	scanf("%d",&x);
	for(i=0;i<n;i++)
	{
		if(data[i]==x)
		{
			break;
		}
	}
	if(i==n)
		printf("-1");
	else
		printf("%d",i+1);
	return 0; 
}
