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
		printf("����ID(Ϊ0ֹͣ��һ���˵�����)��");
			scanf("%d",&em[++i].id);
			getchar();
		printf("�������֣�");
			scanf("%c",&em[i].name);
			getchar();
		printf("�����Ա�(Ӣ��)��");
			scanf("%c",&em[i].sex);
			getchar();
		printf("��������(�� �� ��)��");
		for(int j=0;j<3;j++)
			scanf("%d",&em[i].birthday[j]);
			getchar();
		printf("���빤�ʣ�");
			scanf("%d",&em[i].pay);
	}while(i<=100&&em[i].id!=0); //++��<=�ȼ� 2��6 
	return 0;
}
