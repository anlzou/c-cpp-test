#include<iostream>
#include<vector>
using namespace std;

struct Node{	//vector����Ԫ������ 
	int p;		//������ 
	int n;		//���ִ��� 
};

//��n���������ֽ� 
void fun(int n, vector<Node> &v){
	int i = 2;
	int k = 0;
	Node e;
	
	do{
		if(n%i == 0){
			k++;
			n = n/i;
		}else{
			if(k > 0){
				e.p = i;
				e.n = k;
				v.push_back(e);
			}
			k = 0;
			i++; 
		}
	}while(n > 1 || k != 0);
}

void disp(vector<Node> v){
	vector<Node>::iterator ve;
	for(ve = v.begin(); ve != v.end(); ve++)
		cout<<"������"<<ve->p<<"����"<<ve->n<<"��"<<endl;
}

int main(){
	int n = 240;
	vector<Node> v;
	
	fun(n,v);
	disp(v);
	return 0;
}
