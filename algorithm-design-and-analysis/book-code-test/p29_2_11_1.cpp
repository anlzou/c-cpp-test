#include<iostream>
#include<malloc.h>
#include<vector>

typedef char ElemType;
using namespace std;

//二叉树结构体 
typedef struct node{
	ElemType data;
	struct node *lchild;	
	struct node *rchild;
}BTNode;

//由先序序列a[0...n-1]和中序b[0...n-1]建立二叉链存储结构bt 
BTNode *CreateBTree(ElemType *pre, ElemType *in, int n){
	BTNode *b;
	ElemType *p;
	int k;
	if(n <= 0)
		return NULL;
	b = (BTNode *)malloc(sizeof(BTNode));
	b->data = *pre;
	for(p = in; p < in+n; p++){
		if(*p == *pre)
			break;
	}
	k = p-in;
	b->lchild = CreateBTree(pre+1, in, k);
	b->rchild = CreateBTree(pre+k+1, p+1, n-k-1);
	return b;
}

//求根节点到x节点的（逆向）路径
bool Findxpath1(BTNode *b, ElemType x, vector<int> &path){
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
bool Findxpath2(BTNode *bt, ElemType x, vector<int> tmppath, vector<int> &path){
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

void display(vector<int> &path){
	vector<int>::iterator it;
	for(it = path.begin(); it != path.end(); it++)
		cout<<*it<<" ";
	cout<<endl;
}

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
	ElemType a[5] = {'A','B','C','D','E'};
	ElemType b[5] = {'F','G','H','I','J'};
	bt = CreateBTree(a,b,5);
//	DispBTree(bt);
	Findxpath1(bt, 'E', path);
	display(path);
	//Findxpath2(bt, 6, tmppath, path);
	//display(tmppath);
	return 0;
}
