#include <stdio.h>
#include <string.h>
#define N 50
#define M2 * N-1

typedef struct
{
	char data[5];
	int weight;
	int parent;
	int lchild;
	int rchild;
}HTNode;
typedef struct
{
	char cd[N];
	int start;
}HCode;
void CreateHT(HTNode ht[],int n)
{
	int i,k,lnode,rnode;
	int min1,min2;
	for(i=0;i<2*n-1;i++)
		ht[i].parent=ht[i].lchild=ht[i].rchild=-1;
	for(i=n;i<2*n-1;i++)
	{
		min1=min2=32767;
		lnode=rnode=-1;
		for(k=0;k<=i-1;k++)
			if(ht[k].parent==-1)
			{
				if(ht[k].weight<min1)
				{
					min2=min1;rnode=lnode;
					min1=ht[k].weight;lnode=k;
				}
				else if(ht[k].weight<min2)
				{
					min2=ht[k].weight;
					rnode=k;
				}
			}
		
			