#include<stdio.h>
#define MAX 1000
#define INF 0x3f3f3f3f			//326567 
int map[MAX][MAX];
typedef struct _graph			//��ͼ��ʾ�� 
{
	char vexs[MAX];				//���㼯�� 
	int vexnum;					//������ 
	int edgnum;					//���� 
	int matrix[MAX][MAX];		//�ڽӾ��� 
}Graph,*PGraph;
/*
	���ͣ�
		Graph���ڽӾ����Ӧ�Ľṹ�塣 
		vexs���ڱ��涥�㣬vexnum�Ƕ�������edgnum�Ǳ�����
		matrix�������ڱ��������Ϣ�Ķ�ά���顣
	���磬
		matrix[i][j]=1�����ʾ������i(��vexs[i])���͡�����j(��vexs[j])�����ڽӵ㣻
		matrix[i][j]=0�����ʾ���ǲ����ڽӵ㡣 
*/ 

void floyd(Graph G,int path[][MAX],int dist[][MAX])
{
	int i,j,k;
	int tmp;
	//��ʼ��
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			dist[i][j]=G.matrix[i][j];		//"����i"��"����j"��·������Ϊ"i��j��Ȩ" 
			path[i][j]=j;					//"����i"��"����j"�����·����������j 
		}
	} 
	//�������·��
	for(k=0;k<G.vexnum;k++)
	{
		for(i=0;i<G.vexnum;i++)
		{
			for(j=0;j<G.vexnum;j++)
			{								//������������±�Ϊk�Ķ���·����ԭ����·�����̣������dist[i][j],path[i][j] 
				tmp=(dist[i][k]==INF || dist[k][j]==INF) ? INF:(dist[i][k]+dist[k][j]);
				if(dist[i][j]>tmp)
				{
					dist[i][j]=tmp;			//"i��j���·��"��Ӧ��ֵ�裬Ϊ��С��һ��(������k)
					path[i][j]=path[i][k];	// "i��j���·��"��Ӧ��·��������k
				}
			}
		}
	}
	//��ӡfloyd���·���Ľ�� 
	printf("floyd min path��");
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			printf("%2d",dist[i][j]);
			printf(" ");
		}
	} 
}

int main()
{
	int i,j,k,m,n;
	int a,b,c;
	//����m,n��m��ʾ�ߵ�������n��ʾ������� 
	scanf("%d%d",&m,&n);
	//��ʼ��
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==j)
			{
				map[i][j]=0;
			}
			else
			{
				map[i][j]=INF;
			}
		}
	} 
	//�����
	for(i=1;i<=m;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		map[a][b]=c;						//����һ������ͼ 
	}
	//Floyd-Warshall�㷨������� 
	for(k=1;k<n;k++)
	{
		for(i=1;i<n;i++)
		{
			for(j=1;j<n;j++)
			{
				if(map[i][j]>map[i][k]+map[k][j])
				map[i][j]=map[i][k]+map[k][j];
			}
		}
	}
	//������յĽ�������ն�λ�����д�ľ�����������̵ľ���
	for(i=1;i<=n;i++)
	{
		for(j=1;i<=n;j++)
		{
			printf("%10d",map[i][j]);
		}
		printf(" ");
	}
	return 0;
} 

