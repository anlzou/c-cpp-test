#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int Sum(int data[], int low, int high){
	int add = 0;
	for(low; low <= high; low++)
		add += data[low];
	return add;
}

//�ݹ�Ķ��ַ�
int Fun(int data[],int low,int high){
	int mid = (low+high)/2;
	int sumleft = 0,sumright = 0;
	if(low == high)
		return high+1;
	if(low == high-1)
		return data[low]<data[high]?low+1:high+1;
	if((high-low+1)%2 == 0){
		sumleft = Sum(data,low,mid);
		sumright = Sum(data,mid+1,high);
	}
	else{
		sumleft = Sum(data,low,mid-1);
		sumright = Sum(data,mid+1,high);
	}
	if(sumleft == sumright)
		return mid+1;
	else if((sumleft < sumright) && ((high-low+1)%2 == 0))
		Fun(data,low,mid);
	else if((sumleft < sumright) && ((high-low+1)%2 != 0))
		Fun(data,low,mid-1);
	else if(sumleft > sumright)
		Fun(data,mid,high);
}

int main(){
	int n = 9;						//Ӳ�Ҹ��� 
	int data[20];
	int i;

	for(i = 0; i < n; i++)
		data[i] = 2;
	srand(unsigned(time(NULL)));	//����������� 
	data[rand()%n] = 1;
	for(i = 0; i < n; i++)
		cout<<data[i]<<" ";

	int address = Fun(data,0,n-1);
	cout<<endl<<"�ܹ���Ӳ��:"<<n<<"��"<<endl<<"���ϸ��Ӳ���ڵ�:"<<address<<"��"<<endl;
	//getchar();
	return 0;
}
