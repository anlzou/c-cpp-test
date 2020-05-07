//文件名:exp8-6.cpp
#include <stdio.h>
#include <malloc.h>
#include "graph.h"
void MatToList(MGraph g,ALGraph *&G)
//将邻接矩阵g转换成邻接表G
{
	int i,j;
	ArcNode *p;
	G=(ALGraph *)malloc(sizeof(ALGraph));
	for (i=0;i<g.n;i++)					//给邻接表中所有头节点的指针域置初值
		G->adjlist[i].firstarc=NULL;
	for (i=0;i<g.n;i++)					//检查邻接矩阵中每个元素
		for (j=g.n-1;j>=0;j--)
			if (g.edges[i][j]!=0 && g.edges[i][j]!=INF)	//存在一条边
			{   
			   	p=(ArcNode *)malloc(sizeof(ArcNode));	//创建一个节点*p
				p->adjvex=j;
				p->info=g.edges[i][j];
				p->nextarc=G->adjlist[i].firstarc;		//将*p链到链表后
				G->adjlist[i].firstarc=p;
			}
	G->n=g.n;G->e=g.e;
}

void DispAdj(ALGraph *G)	//输出邻接表G
{
	int i;
	ArcNode *p;
	for (i=0;i<G->n;i++)
	{
		p=G->adjlist[i].firstarc;
		printf("%3d: ",i);
		while (p!=NULL)
		{
			printf("%3d",p->adjvex);
			p=p->nextarc;
		}
		printf("\n");
	}
}

int visited[MAXV];							//全局数组
void DFS(ALGraph *G,int v) 
{
	ArcNode *p;
	visited[v]=1;                   		//置已访问标记
	p=G->adjlist[v].firstarc;      			//p指向顶点v的第一条边
	while (p!=NULL) 
	{	
		if (visited[p->adjvex]==0)			//若p->adjvex顶点未访问,递归访问它
		{
			printf("<%d,%d> ",v,p->adjvex);	//输出生成树的一条边
			DFS(G,p->adjvex);    
		}
		p=p->nextarc;              			//p指向顶点v的下一条边
	}
}
void BFS(ALGraph *G,int v)  
{
	ArcNode *p;
	int queue[MAXV],front=0,rear=0;			//定义循环队列并初始化
	int w,i;
	for (i=0;i<G->n;i++) 
		visited[i]=0;						//访问标志数组初始化
	visited[v]=1;              				//置已访问标记
	rear=(rear+1)%MAXV;
	queue[rear]=v;             				//v进队
	while (front!=rear)       				//若队列不空时循环
	{	
		front=(front+1)%MAXV;
		w=queue[front];       				//出队并赋给w
		p=G->adjlist[w].firstarc; 			//找与顶点w邻接的第一个顶点
		while (p!=NULL) 
		{	
			if (visited[p->adjvex]==0) 		//若当前邻接顶点未被访问
			{	
				printf("<%d,%d> ",w,p->adjvex);	//输出生成树的一条边
				visited[p->adjvex]=1;		//置该顶点已被访问的标志
				rear=(rear+1)%MAXV;			//该顶点进队
				queue[rear]=p->adjvex; 		
           	}
           	p=p->nextarc;              		//找下一个邻接顶点
		}
	}
	printf("\n");
}
void main()
{ 
	int i,j;
	MGraph g;
	ALGraph *G;
	int A[MAXV][11]={{0,1,1,1,0,0,0,0,0,0,0},
	{1,0,0,0,1,1,0,0,0,0,0},
	{1,0,0,1,0,1,1,0,0,0,0},
	{1,0,1,0,0,0,0,1,0,0,0},
	{0,1,0,0,0,0,0,0,0,0,0},
	{0,1,1,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,1,1,1,0},
	{0,0,0,1,0,0,1,0,0,0,1},
	{0,0,0,0,0,0,1,0,0,0,0},
	{0,0,0,0,0,0,1,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0}};
	g.n=11;g.e=13;					//建立图8.13的邻接矩阵
	for (i=0;i<g.n;i++)	
		for (j=0;j<g.n;j++)
			g.edges[i][j]=A[i][j];
	G=(ALGraph *)malloc(sizeof(ALGraph));
	MatToList(g,G);
	printf("图G的邻接表:\n");
	DispAdj(G);
	printf("\n");
	for (i=0;i<g.n;i++) 
		visited[i]=0;
	printf("深度优先生成树:");
	DFS(G,3);printf("\n");
	for (i=0;i<g.n;i++) 
		visited[i]=0;
	printf("广度优先生成树:");
	BFS(G,3);printf("\n");
}
