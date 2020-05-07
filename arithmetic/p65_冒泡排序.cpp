#include<iostream>
typedef int TYPE;
using namespace std;

void swap(TYPE &x, TYPE &y){
	TYPE temp;
	temp = x;
	x = y;
	y = temp;
}

void disp(TYPE a[], int n){
	int i;
	for(i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void bubbleSort(TYPE a[], int n, int i){
	int j;
	bool exchange;
	if(j == n-1)
		return;
	else{
		exchange = false;
		for(j = n-1; j > i; j--)
			if(a[j] < a[j-1]){
				swap(a[j], a[j-1]);
				exchange = true;
			}
		if(exchange == false)
			return;
		else
			bubbleSort(a, n ,i+1);
	}
}

int main(){
	int n = 10;
	TYPE a[] = {2,5,1,7,10,6,9,4,3,8};
	
	cout<<"ÅÅÐòÇ°£º";
	disp(a, n);
	
	bubbleSort(a, n, 0);
	cout<<"ÅÅÐòºó£º";
	disp(a, n);
	
	return 0;
}
