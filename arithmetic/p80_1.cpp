#include<iostream>
#include<stdlib.h>
typedef int TYPE;
using namespace std;

struct Node{
	TYPE data;
	Node *next;
};

//ͷ�巨_p48
bool CreateListF(Node *&L, TYPE a[], int n){
	int i;
	Node *p,*s;
	if(n < 0)
		return false;
	else{
		s = (Node *)malloc(sizeof(Node));
		s->next = NULL;
		s->data = a[0];
		for(i = 0; i < n; i++){
			p = (Node *)malloc(sizeof(Node));
			p->data = a[i];
			p->next = s;
			s = p;
		}
		L = s;
		return true;
	}
}

//β�巨 
bool CreateListR(Node *&L, TYPE a[], int n){
	int i;
	Node *p,*s;
	if(n < 0)
		return 0;
	else{
		L = (Node *)malloc(sizeof(Node));
		L->data = a[0];
		s = L;
		for(i = 1; i <= n; i++){
			p = (Node *)malloc(sizeof(Node));
			p->data = a[i];
			s->next = p;
			s = p;
		}
		p->next = NULL;
	}
}

Node* Reverse(Node *L){
	Node *p = L;
	if((p == NULL) || (p->next == NULL))
		return p;
	else{
		p = Reverse(L->next);
		L->next->next = L;
		L->next = NULL;	
	}
	return p;
}

Node* Reverse_1(Node *L){
	Node *p = L;
	if(p == NULL)
		return NULL;
	Node *q = p->next; 
	if(q == NULL)
		return p;
	else
		L = Reverse_1(q);
	q->next = p;
	p->next = NULL;
	return L;
}

void Disp(Node *&L){
	if(L == NULL)
		return;
	cout<<L->data<<" ";
	L = L->next;
	Disp(L);
}

int main(){
	TYPE a[] = {2,4,1,3,6,5,7,9,8,0};
	int n = sizeof(a)/sizeof(a[0]);
	Node *L;
	//CreateListF(L, a, n);
	CreateListR(L, a, n);
	L = Reverse(L);
	Disp(L->next);
	return 0;
}
