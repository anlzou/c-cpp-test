#include<iostream>
#include<malloc.h>
#include<vector>

typedef int ElemType;
using namespace std;

//二叉树结构体 
typedef struct node{
	ElemType data;
	struct node *lchild;	
	struct node *rchild;
}BTNode;

//由先序序列a[0...n-1]和中序b[0...n-1]建立二叉链存储结构bt 
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
	bt->lchild = CreateBTree(a+1,b,k);
	bt->rchild = CreateBTree(a+k+1, b+k+1, n-k-1);
	return bt;
}

//求根节点到x节点的（逆向）路径
bool Findxpath1(BTNode *b, int x, vector<int> &path){
	if(b == NULL)
		return false;
	if(b->data == x){
		path.push_back(x);
		return true;
	}else if(Findxpath1(b->lchild, x, path) || Findxpath1(b->rchild, x, path)){
		path.push_back(b->data);
		return true;
	}
}

//求根节点到x结点的（正向）路径path
bool Findxpath2(BTNode *bt, int x, vector<int> tmppath, vector<int> &path){
	if(bt == NULL)
		return false;
	tmppath.push_back(bt->data);
	if(bt->data == x){
		path = tmppath;
		return true;
	}
	bool find = Findxpath2(bt->lchild, x, tmppath, path);
	if(find)
		return true;
	else
		return Findxpath2(bt->rchild, x, tmppath, path);
} 

//输出根节点到x的路径 
void Dispath(vector<int> &path){
	vector<int>::iterator it;
	for(it = path.begin(); it != path.end(); it++)
		cout<<*it<<" ";
	cout<<endl;
}

//输出二叉数 
void DispBTree(BTNode *b){
	if(b != NULL){
		cout<<b->data;
		if((b->lchild != NULL) || (b->rchild != NULL)){
			cout<<"(";
			DispBTree(b->lchild);
			if(b->rchild != NULL)
				cout<<",";
			DispBTree(b->rchild);
			cout<<")";
		}
	}
}

int main(){
	BTNode *bt;
	vector<int> path;
	vector<int> tmppath;
	ElemType a[] = {2,3,4,6,5};
	ElemType b[] = {8,9,0,1,7};
	bt = CreateBTree(a,b,5);
	//DispBTree(bt);
	Findxpath1(bt, 6, path);
	Dispath(path);
	
	//Findxpath2(bt, 8, tmppath, path);
	//Dispath(tmppath);
	return 0;
}
