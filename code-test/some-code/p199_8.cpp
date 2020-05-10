#include<stdio.h>
int main()
{
	int tab[10];
	int i,j,temp;
	for(i=0;i<10;i++)
	scanf("%d",&tab[i]);
		temp=tab[0];
	for(i=0;i<10;i++)
	{
		if(temp<=tab[i])
		{
		temp=tab[i];
		j=i;
		}
	}
	printf("最大值：%d，下标：%d\n",temp,j);
		temp=tab[0];
	for(i=0;i<10;i++)
	{
		if(temp>=tab[i])
		{
		temp=tab[i];
		j=i;
	    }
	}
	printf("最小值：%d，下标：%d",temp,j);
	return 0;
}
