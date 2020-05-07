#include<stdio.h>
#define MAX 1000
#define INF 0x3f3f3f3f			//326567 
int map[MAX][MAX];
typedef struct _graph			//用图表示的 
{
	char vexs[MAX];				//顶点集合 
	int vexnum;					//顶点数 
	int edgnum;					//边数 
	int matrix[MAX][MAX];		//邻接矩阵 
}Graph,*PGraph;
/*
	解释：
		Graph是邻接矩阵对应的结构体。 
		vexs用于保存顶点，vexnum是顶点数，edgnum是边数；
		matrix则是用于保存矩阵信息的二维数组。
	例如，
		matrix[i][j]=1，则表示”顶点i(即vexs[i])”和”顶点j(即vexs[j])”是邻接点；
		matrix[i][j]=0，则表示它们不是邻接点。 
*/ 

void floyd(Graph G,int path[][MAX],int dist[][MAX])
{
	int i,j,k;
	int tmp;
	//初始化
	for(i=0;i<G.vexnum;i++)
	{
		for(j=0;j<G.vexnum;j++)
		{
			dist[i][j]=G.matrix[i][j];		//"顶点i"到"顶点j"的路径长度为"i到j的权" 
			path[i][j]=j;					//"顶点i"到"顶点j"的最短路径经过顶点j 
		}
	} 
	//计算最短路径
	for(k=0;k<G.vexnum;k++)
	{
		for(i=0;i<G.vexnum;i++)
		{
			for(j=0;j<G.vexnum;j++)
			{								//如果经过顶点下表为k的顶点路径比原两点路径更短，则更新dist[i][j],path[i][j] 
				tmp=(dist[i][k]==INF || dist[k][j]==INF) ? INF:(dist[i][k]+dist[k][j]);
				if(dist[i][j]>tmp)
				{
					dist[i][j]=tmp;			//"i到j最短路径"对应的值设，为更小的一个(即经过k)
					path[i][j]=path[i][k];	// "i到j最短路径"对应的路径，经过k
				}
			}
		}
	}
	//打印floyd最短路径的结果 
	printf("floyd min path：");
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
	//读入m,n，m表示边的条数，n表示顶点个数 
	scanf("%d%d",&m,&n);
	//初始化
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
	//读入边
	for(i=1;i<=m;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		map[a][b]=c;						//这是一个有向图 
	}
	//Floyd-Warshall算法核心语句 
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
	//输出最终的结果，最终二位数组中存的就是两点中最短的距离
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

