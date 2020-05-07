#include <stdio.h>
#include <malloc.h>
#define MaxCol  10		//最大列数
typedef int ElemType;
typedef struct Node1		//定义数据节点类型
{
	ElemType data[MaxCol];
	struct Node1 *next;	//指向后继数据节点
}DList;
typedef struct Node2	//定义头节点类型
{  
	int Row,Col;	//行数和列数
	DList *next;	//指向第一个数据节点
}HList;

void CreateTable(HList *&h)
{  
	int i,j;	
	DList *r,*s;
	h=(HList *)malloc(sizeof(HList));//创建头节点
	h->next=NULL;
	printf("表的行数,列数:");
	scanf("%d%d",&h->Row,&h->Col);	//输入表的行数和列数
	for (i=0;i<h->Row;i++)		//输入所有行的数据
	{  
		printf("  第%d行:",i+1);
		s=(DList *)malloc(sizeof(DList));	//创建数据节点
		for (j=0;j<h->Col;j++)		//输入一行的数据
			scanf("%d",&s->data[j]);
		if (h->next==NULL)		//插入第一个数据节点
			h->next=s;
		else			//插入其他数据节点
			r->next=s;	//将*s插入到*r节点之后
		r=s;			//r始终指向尾节点
	}
	r->next=NULL;		//尾节点next域置空
}

void DestroyTable(HList *&h)
{  
	DList *pre=h->next,*p=pre->next;
	while (p!=NULL)
	{	
		free(pre);
		pre=p;
		p=p->next;
	}
	free(pre);
	free(h);
}

void DispTable(HList *h)
{  
	int j;
	DList *p=h->next;	//p指向开始行节点
	while (p!=NULL)	//扫描所有行
	{	
		for (j=0;j<h->Col;j++)	//输出一行的数据
			printf("%4d",p->data[j]);
		printf("\n");
		p=p->next;		//p指向下一行节点
	}
}

void LinkTable(HList *h1,HList *h2,HList *&h)
{  
	int i,j,k;
	DList *p=h1->next,*q,*s,*r;
	printf("连接字段是:第1个表序号,第2个表序号:");
	scanf("%d%d",&i,&j);
	h=(HList *)malloc(sizeof(HList));//创建结果表头节点
	h->Row=0;				//置行数为0
	h->Col=h1->Col+h2->Col;	//置列数为表1和表2的列数和
	h->next=NULL;			//置next域为NULL
	while (p!=NULL) 		//扫描表1
	{  
		q=h2->next;			//q指向表2的开始节点
		while (q!=NULL)		//扫描表2
		{  
			if (p->data[i-1]==q->data[j-1])//对应字段值相等
			{	
				s=(DList *)malloc(sizeof(DList));//创建节点
				for (k=0;k<h1->Col;k++)	//复制表1的当前行
					s->data[k]=p->data[k];
				for (k=0;k<h2->Col;k++)	//复制表2的当前行
					s->data[h1->Col+k]=q->data[k];
				if (h->next==NULL) //若插入第一个数据节点
					h->next=s;	 //将*s插入到头节点之后
				else			 //若插入其他数据节点
					r->next=s;	 //将*s插入到*r节点之后
				r=s;			 //r始终指向尾节点
				h->Row++;		 //表行数增1
			}
			q=q->next;		 //表2下移一个记录
		}
		p=p->next;			 //表1下移一个记录
	}
	r->next=NULL;	 	 //表尾节点next域置空
}

void main()
{  
	HList *h1,*h2,*h;
	printf("表1:\n");
	CreateTable(h1);		//创建表1
	printf("表2:\n");
	CreateTable(h2);		//创建表2
	LinkTable(h1,h2,h);		//连接两个表
	printf("连接结果表:\n");
	DispTable(h);			//输出连接结果
	DestroyTable(h1);		//销毁单链表h1
	DestroyTable(h2); 		//销毁单链表h2
	DestroyTable(h); 		//销毁单链表h
}
