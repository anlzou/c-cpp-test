#include<iostream>
#include<stdlib.h>
#define MaxSize 100
typedef char ElemType;
using namespace std;

typedef struct Node{
	ElemType data;
	Node *lchild;
	Node *rchild;
}BTNode;

BTNode *CreateBTree(ElemType a[], ElemType b[], int n){
	int k;
	if(n<=0)
		return NULL;
	BTNode *bt;
	bt=(BTNode *)malloc(sizeof(BTNode));
	bt->data=a[0];
	for(k=0;k<n;k++)
	{
		if(b[k]==a[0])
			break;
	}
	bt->lchild=CreateBTree(a+1,b,k);
	bt->rchild=CreateBTree(a+k+1,b+k+1,n-k-1);
	return bt;
}

bool Alike(BTNode *bt, BTNode *bt1){
	if(((bt != NULL) && (bt1 == NULL)) || ((bt == NULL) && (bt1 != NULL)))
		return false;		
	else if(bt == NULL && bt1 == NULL)
		return true;
	else if(bt->data != bt1->data){
		return false;
	}
	else{
		Alike(bt->lchild,bt1->lchild);
		Alike(bt->rchild,bt1->rchild);
	}
}

void DispBTree(BTNode *b){
	if(b != NULL){
		cout<<b->data;
		if(b->lchild != NULL || b->rchild != NULL)
			cout<<"(";
		DispBTree(b->lchild);
		if(b->rchild != NULL)
			cout<<",";
		DispBTree(b->rchild);
		cout<<")";
	}
}

int main(){
	ElemType first_1[] = "ABDGHECFIJ";
	ElemType index_1[] = "GDHBEACIJF";
	ElemType first_2[] = "BDGHECFIJ";
	ElemType index_2[] = "GDHBECIJF";
	int n = 10;
	BTNode *bt,*bt1;
	bt = CreateBTree(first_1,index_1,n);
	bt1 = CreateBTree(first_2,index_2,n-1);
	DispBTree(bt);
	cout<<endl;
	DispBTree(bt1);
	cout<<endl;
	string is = Alike(bt,bt1)?"":"不";
	cout<<"两棵二叉树"<<is<<"相等";
	return 0;
}
