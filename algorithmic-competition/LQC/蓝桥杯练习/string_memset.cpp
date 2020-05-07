#include<stdio.h>
#include<string.h> 
int main()
{
	int i=0,j=0;
	int data[10][10];
	memset(data,0,sizeof(data));
	for(i;i<10;i++)
	{
		for(j;j<10;j++)
			printf("%d",data[i][j]);
		printf("\n");
	}
	return 0;
}
