// an.cpp : 定义控制台应用程序的入口点。
//

#include<stdio.h>
#include<malloc.h>
typedef int TypeElem;
int add=0;
typedef struct node
{
	TypeElem data;
	node *next;
}List;

void CreateListByDigui(List *L,TypeElem a[],int n)
{
	List *p=L;
	if(n==0)
		return ;
	while(p!=NULL)
		p=p->next;
	List *node=(List *)malloc(sizeof(List));
	p->next=node;
	node->data=a[add++];
	node->next=NULL;
	CreateListByDigui(L->next,a,n);
}


int main()
{
	int n;
	int a[10];
	int i;
	List *L;
	List *p;
	p=L;
	printf("输入的节点数：");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	CreateListByDigui(L,a,n);
	for(i=0;i<n;i++)
	{
		p=p->next;
		printf("%d\n",p->data);
	}
	return 0;
}
