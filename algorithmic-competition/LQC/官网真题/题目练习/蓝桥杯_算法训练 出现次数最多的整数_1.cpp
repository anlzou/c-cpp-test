//Î´Íê³É 
#include<stdio.h>
int main()
{
	int n,data[20],tap[20];
	int i,j,k=0;
	int temp;
	scanf("%d",&n);
	if(n<=0 || n>20)	return 0;
	for(i=0;i<n;i++)
		scanf("%d",&data[i]);
	for(i=0;i<n-1;i++)
	{
			if(data[i]==data[i+1])
			{
				tap[k]+=1;
			}
			else if(data[i]<data[i+1])
			{
				tap[k]=1;
			}
			k++;
	}
	for(i=0;i<n-1;i++)
	{
		if(tap[i+1]>tap[i])
		{
			temp=i+1;
		}
		else
		temp=0;
	}
	printf("%d",data[temp]);
	return 0;
} 
