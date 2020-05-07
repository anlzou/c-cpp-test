#include<iostream>
#include<vector>
#define ElemType int
using namespace std;

struct BTNode{
	ElemType data;
	BTNode *rchild;
	BTNode *lchild;
};

//创建二叉树
BTNode *CreateBTree(ElemType a[], ElemType b[], int n){
	int k;
	if(n <= 0) return NULL;
	ElemType root = a[0];
	BTNode *bt = (BTNode *)malloc(sizeof(BTNode));
	bt->data = root;
	for(k = 0; k < n; k++)
		if(b[k] == root)
			break;
	bt->lchild = CreateBTree(a+1,b,k);
	bt->rchild = CreateBTree(a+k+1, b+k, n-k-1);
	return bt;
}

//求根节点到x节点的（逆向）路径
bool Findxpath1(BTNode *b, int x, vector<int> &path){
	if(b == NULL){
		return false;
	}
	if(b->data == x){
			path.push_back(x);
			return true;
	}else if(Findxpath1(b->lchild, x, path) || Findxpath1(b->rchild, x, path)){
			path.push_back(b->data);
			return true;
	}
}

int main(){
	BTNode *bt;
	vector<int> an;
	ElemType a[5] = {2,3,4,6,5};
	ElemType b[4] = {8,9,0,1};
	bt = CreateBTree(a,b,10);
	Findxpath1(bt, 2, an);
	printf("%d\n",an);
	return 0;
}