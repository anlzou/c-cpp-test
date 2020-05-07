//文件名:exp8-1.cpp
#include <stdio.h>
#include <malloc.h>
#include "graph.h"
//-------------------------------------
//--------不带权图的算法-----------------
//-------------------------------------
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
			if (g.edges[i][j]!=0)		//邻接矩阵的当前元素不为0
			{   
			   	p=(ArcNode *)malloc(sizeof(ArcNode));	//创建一个节点*p
				p->adjvex=j;
				p->nextarc=G->adjlist[i].firstarc;		//将*p链到链表后
				G->adjlist[i].firstarc=p;
			}
	G->n=g.n;G->e=g.e;
}
void ListToMat(ALGraph *G,MGraph &g)
//将邻接表G转换成邻接矩阵g
{
	int i,j;
	ArcNode *p;
	for (i=0;i<G->n;i++)      	//g.edges[i][j]赋初值0
	   	for (j=0;j<G->n;j++)
			g.edges[i][j]=0;
	for (i=0;i<G->n;i++) 
	{	
		p=G->adjlist[i].firstarc;
	    while (p!=NULL) 
		{	
			g.edges[i][p->adjvex]=1;
		    p=p->nextarc;
		}
	}
	g.n=G->n;g.e=G->e;
}
void DispMat(MGraph g)		//输出邻接矩阵g
{
	int i,j;
	for (i=0;i<g.n;i++)
	{
		for (j=0;j<g.n;j++)
			printf("%3d",g.edges[i][j]);
		printf("\n");
	}
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
//-------------------------------------
//--------带权图的算法-----------------
//-------------------------------------
void MatToList1(MGraph g,ALGraph *&G)
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
void ListToMat1(ALGraph *G,MGraph &g)
//将邻接表G转换成邻接矩阵g
{
	int i,j;
	ArcNode *p;
	for (i=0;i<G->n;i++)      	//g.edges[i][j]赋初值0
	   	for (j=0;j<G->n;j++)
			if (i==j)
				g.edges[i][j]=0;
			else
				g.edges[i][j]=INF;
	for (i=0;i<G->n;i++) 
	{	
		p=G->adjlist[i].firstarc;
	    while (p!=NULL) 
		{	
			g.edges[i][p->adjvex]=p->info;
		    p=p->nextarc;
		}
	}
	g.n=G->n;g.e=G->e;
}
void DispMat1(MGraph g)
//输出邻接矩阵g
{
	int i,j;
	for (i=0;i<g.n;i++)
	{
		for (j=0;j<g.n;j++)
			if (g.edges[i][j]==INF)
				printf("%3s","∞");
			else
				printf("%3d",g.edges[i][j]);
		printf("\n");
	}
}
void DispAdj1(ALGraph *G)
//输出邻接表G
{
	int i;
	ArcNode *p;
	for (i=0;i<G->n;i++)
	{
		p=G->adjlist[i].firstarc;
		printf("%3d: ",i);
		while (p!=NULL)
		{
			printf("%3d(%d)",p->adjvex,p->info);
			p=p->nextarc;
		}
		printf("\n");
	}
}
int visited[MAXV]={0};
void DFS(ALGraph *G,int v,int path[],int d)  
{  
	ArcNode *p; int w,i;
	visited[v]=1; 				//置已访问标记
	d++;path[d]=v;
	p=G->adjlist[v].firstarc;  //p指向其第一边结点
	while (p!=NULL) 
	{  
		w=p->adjvex;
		if (visited[w]==0) 
		{
			if (w!=v)
			{
				printf("%3d:",w);
				for (i=0;i<=d;i++)
					printf("%3d",path[i]);
				printf("%3d\n",w);
			}
			DFS(G,w,path,d);         	//若w顶点未访问，递归访问它
		}
		p=p->nextarc;           //p指向顶点v的下一条弧的弧头结点
	}
	visited[v]=0;
}
void main()
{
	int i,j;
	MGraph g,g1;
	ALGraph *G;
	int A[MAXV][6]={
		{0,5,INF,7,INF,INF},
		{INF,0,4,INF,INF,INF},
		{8,INF,0,INF,INF,9},
		{INF,INF,5,0,INF,6},
		{INF,INF,INF,5,0,INF},
		{3,INF,INF,INF,1,0}};
	g.n=6;g.e=10;			//建立图8.1中有向带标图G的邻接矩阵
	for (i=0;i<g.n;i++)	
		for (j=0;j<g.n;j++)
			g.edges[i][j]=A[i][j];
	printf("有向图G的邻接矩阵:\n");
	DispMat1(g);
	G=(ALGraph *)malloc(sizeof(ALGraph));
	printf("图G的邻接矩阵转换成邻接表:\n");
	MatToList1(g,G);
	DispAdj1(G);
	printf("图G的邻接表转换成邻接邻阵:\n");
	ListToMat1(G,g1);
	DispMat1(g1);
}