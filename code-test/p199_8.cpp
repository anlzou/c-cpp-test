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
	printf("���ֵ��%d���±꣺%d\n",temp,j);
		temp=tab[0];
	for(i=0;i<10;i++)
	{
		if(temp>=tab[i])
		{
		temp=tab[i];
		j=i;
	    }
	}
	printf("��Сֵ��%d���±꣺%d",temp,j);
	return 0;
}
