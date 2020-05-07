#include<stdio.h>
#include"打渔晒网问题.h"
int main()
{
	data b,c;
	int i,ans=0;
	int cho;
	do{
	printf("输入时间例如(2005.4.3)：\n");
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
		printf("他在打鱼！\n\n");
	else
		printf("他在晒网！\n\n");
	printf("是否继续(1继续；0不继续)\n");
	scanf("%d",&cho);
	}while(cho==1);
	return 0;
} 
