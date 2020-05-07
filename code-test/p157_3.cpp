#include<stdio.h>
#define N 10
int main()
{
	int a[N][N],b[N][N];
	int x,y;
	int i,j;
	printf("输入行列数(用空格分开)：");
	scanf("%d %d",&x,&y);
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			scanf("%d",&a[i][j]);
	for(i=0;i<x;i++)
		for(j=0;j<y;j++)
			b[j][i]=a[i][j];
			printf("\n");	
	for(i=0;i<y;i++)
	{
		for(j=0;j<x;j++)
			printf("%d ",b[i][j]);
	printf("\n");
	}
	return 0;
}
