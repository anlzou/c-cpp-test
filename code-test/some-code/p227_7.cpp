#include<stdio.h>
struct WORKER
{
	char id[8],name[16],sex[8];
	int y,m,d;
	float pay;	
};
int main()
{
	WORKER worker[10];
	int n;
	int e=0;
	int i;
	printf("����ְ��������");
	scanf("%d",&n);
	do
	{
		printf("��%d��ְ������Ϣ¼�룺\n",e+1);
		printf("id=");
			scanf("%s",worker[e].id);
		printf("name=");
			scanf("%s",worker[e].name);
		printf("sex=");
			scanf("%s",worker[e].sex);
		printf("�������գ�yyyy mm dd����");
			scanf("%d",&worker[e].y);
			scanf("%d",&worker[e].m);
			scanf("%d",&worker[e].d);
		printf("pay=");
			scanf("%f",&worker[e].pay);
			e++;
		printf("\n");	
	}while(--n);
	printf("\n");
	for(i=0;i<e;i++)
	{
		printf("%s %s %s %d %d %d %f\n",worker[i].id,worker[i].name,worker[i].sex,worker[i].y,worker[i].m,worker[i].d,worker[i].pay);
	}
	return 0;
}
