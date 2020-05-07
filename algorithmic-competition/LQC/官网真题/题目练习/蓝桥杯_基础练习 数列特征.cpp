//40 30

#include<stdio.h>
int main()
{
	int n;
	int data[50],tap_min=0,tap_max=0;
	int i;
	int sum=0; 
	scanf("%d",&n);
	if(n==0) return 0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	tap_min=data[0];
	tap_max=data[0];
	sum=data[0];
	if(n>1)
	for(i=1;i<n;i++)
	{
		if(tap_max<data[i])  //最大值 
			tap_max=data[i];
		if(tap_min>data[i])  //最小值 
			tap_min=data[i];
		sum+=data[i];
	}
	printf("%d\n%d\n%d",tap_max,tap_min,sum);
	return 0;
} 
#include<stdio.h>
int main()
{
	int n,i,data[20],max=0,min=0,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	for(i=0;i<n;i++)
	{
		if(i==0)
			max=min=data[0];
		if(max<data[i])
			max=data[i];
		if(min>data[i])
			min=data[i];
		sum+=data[i];
	}
	printf("%d\n%d\n%d",max,min,sum);
	return 0;
}

