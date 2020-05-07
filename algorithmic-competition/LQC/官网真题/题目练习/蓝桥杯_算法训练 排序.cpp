#include<stdio.h>
int main()
{
	int data[3];
	int i=0,j=0;
	int temp=0;
	while(i<3)
	{
		scanf("%d",&data[i]);
		i++;
	}
	for(i=0;i<2;i++)
	{
		for(j=1;j<3;j++)
		{
			if(data[i]<data[j])
			{
				temp=data[i];
				data[i]=data[j];
				data[j]=temp;
			}
		}	
	}
	
	for(i=0;i<3;i++)
	{
		printf("%d ",data[i]);
	}
	return 0;
}
