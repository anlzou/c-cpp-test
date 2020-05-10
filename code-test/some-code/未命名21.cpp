#include<stdio.h>
//#include<string.h>
struct employee
{
	int id;
	char name[6];
	char sex[6];
	int birthday[4];
	float pay;
}em[100];
int main()
{
	int i=0,j;
	do
	{
		printf("输入ID(为0停止下一个人的输入)：");
			scanf("%d",&em[++i].id);
			getchar();
		printf("输入名字：");
			scanf("%c",&em[i].name);
			getchar();
		printf("输入性别(英文)：");
			scanf("%c",&em[i].sex);
			getchar();
		printf("输入生日(年 月 日)：");
		for(int j=0;j<3;j++)
			scanf("%d",&em[i].birthday[j]);
			getchar();
		printf("输入工资：");
			scanf("%d",&em[i].pay);
	}while(i<=100&&em[i].id!=0); //++、<=等级 2、6 
	return 0;
}
