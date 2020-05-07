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
	if(n <= 0)
		return NULL;
	ElemType root = a[0];
	BTNode *bt = (BTNode *)malloc(sizeof(BTNode));
	bt->data = root;
	for(k = 0; k < n; k++)
		if(b[k] == root)
			break;
	bt->lchild = CreateBTree(a+1, b, k);
	bt->rchild = CreateBTree(a+k+1, b+k+1, n-k-1);
	return bt;
}

bool Alike(BTNode *bt, BTNode *bt1){
	if(bt == NULL && bt1 == NULL)
		return true;
	if(bt->data != bt1->data){
		return false;
	}else{
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
	ElemType a[] = {1,2,3,4,5};//erro
	ElemType b[] = {6,7,8,9,0};//erro
	int n = 10;
	BTNode *bt,*bt1;
	bt = CreateBTree(a,b,n);
	bt1 = CreateBTree(a,b,n);
	DispBTree(bt);
	//DispBTree(bt1);
	//Alike(bt,bt1);
	return 0;
}
