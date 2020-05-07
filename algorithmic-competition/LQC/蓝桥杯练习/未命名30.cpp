#include<stdio.h>
int len(int x)
{
	if(x<10) return 1;
	return len(x/10)+1;
}
int main()
{
	int n;
	int x;
	int i=0;
	int j;
	int data[10];
	scanf("%d",&n);
	j=len(n);
	while(n>0)
	{
		x=n%10;
		data[i++]=x;
		n=n/10;
	}
	printf("%d\n",j);
	for(i=0;i<j;i++)
		printf("%d ",data[i]);
	return 0;
}
