#include<stdio.h>
#include"����ɹ������.h"
int main()
{
	data b,c;
	int i,ans=0;
	int cho;
	do{
	printf("����ʱ������(2005.4.3)��\n");
	scanf("%d.%d.%d",&b.year,&b.mounth,&b.day);
	c.mounth=12;
	c.day=31;
	for(i=1990;i<=b.year;i++)
		{
			c.year=i;
			ans+=returnalldays(c);
		}
	ans+=returnalldays(b);
	ans%=5;
	if(ans>0&&ans<4)
		printf("���ڴ��㣡\n\n");
	else
		printf("����ɹ����\n\n");
	printf("�Ƿ����(1������0������)\n");
	scanf("%d",&cho);
	}while(cho==1);
	return 0;
} 
