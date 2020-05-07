#include<stdio.h>
void main()
{
	void fun(int a[][]);
	int a[2][3],i,j;
	for (i=0;i<2;i++)
	{
		for (j=0;j<3;j++)
			scanf("%d",&a[i][j]);
			getchar();
			}
		fun(a);
}
void fun(int a[2][3])
{   int b[3][2];
	int i,j;
	printf("————————————————————————改变衡纵之后————————————————————————\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<2;j++)
		{
		    b[i][j]=a[j][i];
		    printf("%d ",b[i][j]);
		    }
		    printf("\n");
		    }
}
			