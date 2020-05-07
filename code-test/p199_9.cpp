#include<stdio.h>
int main()
{
	int data[40];
	int n=0;
	int i=0;
	do
	{
		scanf("%d",&data[i]);
		i++;
	}
	while(data[i-1]>=0&&data[i-1]<10);
	for(int j=0;j<i-1;j++)
		if(data[j]%2==0)
			n++;
	printf("%d\n",n);	
	return 0;
} 
