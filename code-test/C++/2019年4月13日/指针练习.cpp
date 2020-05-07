#include<iostream> 
using namespace std;

void swap(int *p, int *q){
	int temp;
	temp = *p;
	p = q;
	q = &temp;
}

void print(int *p, int *q){
	cout<<*p<<" "<<*q<<endl;
}

int main(){
	int a = 2,b = 3;
	int *p = &a,*q = &b;
	*p = 4;
	swap(p,q);
	print(p,q);
	return 0;
}
