//Î´Íê³É 
#include<stdio.h>
int main()
{
	int n,data[20],tap[20];
	int i,j,k;
	int temp;
	scanf("%d",&n);
	if(n<=0 || n>20)	return 0;
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			k=1;
			if(data[i]==data[j])
			{
				tap[i]=k++;
			}
			else if(data[i]<data[j])
			{
				tap[i]=1;
				break;
			}
		}
	}
	for(i=1;i<n-1;i++)
	{
		temp=tap[i];
		if(tap[i+1]>tap[i])
		{
			temp=tap[i+1];
		} 
	}
	printf("%d",data[temp]);
	return 0;
} 
