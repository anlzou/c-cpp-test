#include<iostream>
#include<stdlib.h>
#define MaxSize 100
typedef char TYPE;
using namespace std;

typedef struct Node{
	TYPE data;
	Node *lchild;
	Node *rchild;
}BTNode;

void CreateBTree(BTNode *&b, TYPE *str){
	BTNode *St[MaxSize], *p;
	int top = -1, k, j = 0;
	char ch;
	b = NULL;
	ch = str[j];
	while(ch != '\0'){
		switch(ch){
			case '(':
				top++;
				St[top] = p;
				k = 1;
				break;
			case ')':
				top--;
				break;
			case ',':
				k = 2;
				break;
			default:
				p = (BTNode *)malloc(sizeof(BTNode));
				p->data = ch;
				p->lchild = p->rchild = NULL;
				if(NULL == b)
					b = p;
				else{
					switch(k){
						case 1:
							St[top]->lchild = p;
							break;
						case 2:
							St[top]->rchild = p;
							break;
					}
				}
		}
		j++;
		ch = str[j];
	}
}

void DispBTree(BTNode *b){
	if(b != NULL){
		cout<<b->data;
		if(b->lchild != NULL || b->rchild != NULL){
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
	BTNode *b;
	char str[] = "A(B(D,E(H(J,K(L,M(,N))))),C(F,G(,I)))";
	CreateBTree(b,str);
	DispBTree(b);
	return 0;
}














