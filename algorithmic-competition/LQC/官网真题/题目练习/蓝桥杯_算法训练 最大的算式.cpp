//11·Ö 
#include<stdio.h>
int main()
{
	int n,k;
	int data[15];
	int i,j;
	int temp;
	int ans1=0,ans2=0;
	
	scanf("%d%d",&n,&k);
	if((n<2 || n>15)  || (k<0 || k>n-1))
		return 1;
		
		for(i=0; i<n; i++)
	scanf("%d",&data[i]);
	
	for(i=0; i<=n-2; i++)
	{
		for(j=i+1; j<=n-1; j++)
		{
			if(data[i]>data[j])
				{
					temp=data[i];
					data[i]=data[j];
					data[j]=temp;
				}
		}
	}	
	
	i=1;  //+
	j=n-2;  //*
	ans1=data[0];
	ans2=data[n-1];
	while(i <= n-k-1)
		ans1+=data[i++];
	while(j >= k+1)
		ans2*=data[j--];

	printf("%d",ans1*ans2);
	return 0;
}


