#include<iostream>
#include<vector>
using namespace std;

struct Node{	//vector向量元素类型 
	int p;		//质因素 
	int n;		//出现次数 
};

//求n的质因数分解 
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
		cout<<"质因数"<<ve->p<<"出现"<<ve->n<<"次"<<endl;
}

int main(){
	int n = 240;
	vector<Node> v;
	
	fun(n,v);
	disp(v);
	return 0;
}
