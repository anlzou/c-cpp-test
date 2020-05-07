#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#define MAXN 20
using namespace std;
int q[MAXN];
int count = 0;

void dispasolution(int n){
	cout<<"第"<<++count<<"个解";
	for(int i = 1; i <= n; i++)
		cout<<i<<q[i];
	cout<<endl;
}

bool place(int i){
	int j = 1;
	if(i == 1){
		return true;
	}
	while(j < i){
		if((q[i] == q[j]) || (abs(q[j]) - q[i]) == abs(j-i))
			return false;
		j++;
	}
	return true;
}

void Queens(int n){
	int i = 1;
	q[i] = 0;
	while(i >= 1){
		q[i]++;
		while(q[i] <= n && !place(i))
			q[i]++;
		if(q[i] <= n){
			if(i == n)
				dispasolution(n);
			else{
				i++;
				q[i] = 0;
			}
		}
		else 
			i--;
	}
}

void main(){
	int n;
	cin>>n;
	cout<<n<<"皇后问题求解如下："<<endl;
	Queens(n);
}