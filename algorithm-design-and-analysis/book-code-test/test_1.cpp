//erro
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int sum(int data[], int low, int high){
	int sums = 0;
	for(low; low <= high; low++)
		sums += data[low];
	return sums;
}

int fun(int data[],int low,int high){
	int mid = (low+high)/2;
	int sumleft = 0,sumright = 0;
	if(low == high)
		return high+1;
	if(low == high-1)
		return data[low]<data[high]?low+1:high+1;
	if(high%2 != 0){
		sumleft = sum(data,low,mid);
		sumright = sum(data,mid+1,high);
	}
	else{
		sumleft = sum(data,low,mid-1);
		sumright = sum(data,mid+1,high);
	}
	if(sumleft == sumright)
		return mid+1;
	else if((sumleft < sumright) && (high%2 != 0))
		fun(data,low,mid);
	else if((sumleft < sumright) && (high%2 == 0))
		fun(data,low,mid-1);
	else if(sumleft > sumright)
		fun(data,mid+1,high);
}

int main(){
	int n = 6;	//硬币个数 
	int data[20];
	int i;

	for(i = 0; i < n; i++)
		data[i] = 2;
	srand(unsigned(time(NULL)));
	data[rand()%n] = 1;
	for(i = 0; i < n; i++)
		cout<<data[i]<<" ";

	int address = fun(data,0,n-1);
	cout<<endl<<"总共有硬币:"<<n<<"个"<<"不合格的硬币在第:"<<address<<"个"<<endl;
	//getchar();
	return 0;
}
