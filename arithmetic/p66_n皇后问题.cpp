//error
#include<iostream>
#include<stdlib.h>
#define N 20							//最多皇后个数 
int q[N];								//存放各个皇后所在的列号，即(i,q[i])为一个皇后位置 
int count = 0; 							//累计解个数 
using namespace std;

void dispasolution(int n){				//输出n皇后问题的一个解
	int i;
	cout<<"第"<<++count<<"个解：";
	for(i = 1; i <= n; i++)
		cout<<"("<<i<<","<<q[i]<<")";
	cout<<endl; 
}

bool place(int i, int j){				//测试(i,j)位置能否放皇后 
	if(i == 1)							//第一个皇后总是可以放置 
		return true;
	int k = 1;
	while(k < i){						//k = 1~i-1是已经放置了皇后的行 
		if((q[k] == j) || (abs(q[k]-j) == abs(i-k)))
			return false;
		k++;
	}
	return true; 
}

void queen(int i, int n){
	int j;
	if(i > n)
		dispasolution(n);
	else{
		for(j = 1; n <= n; j++)
			if(place(i, j)){
				q[i] = j;
				queen(i+1, n);
			}
	}
}

int main(){
	int n;							//n存放实际皇后的个数 
	cout<<"皇后问题(n<20)n=";
	cin>>n;
	if(n > 20)
		cout<<"n值太大，不能求解！";
	else{
		cout<<n<<"皇后问题的解如下："<<endl;
		queen(1,n);
	} 
	return 0;
}
