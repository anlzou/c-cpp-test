#include<iostream>
using namespace std;

void fun1(int n){
	int i;
	int m;
	for(i = 1; i <= 5; i++){
		m = i;
		if(m*m > n){
			cout<<m-1;
			break;
		}
		else if(m*m == n){
			cout<<m;
			break;
		}
	}
	cout<<endl;
}

void fun2(int n){
	int i,j,k;
	int m,x,y;
	m = n/5;
	x = n/2;
	y = n/1;
	for(i = m; i >= 0; i--)
		for(j = x; j >= 0; j--)
			for(k = y; k >= 0; k--)
				if(i*5+j*2+k*1 == n)
					cout<<i<<" "<<j<<" "<<k<<endl;
}

int main(){
	int n;
	cout<<"ÊäÈën£º";
	cin>>n;
	
	fun1(n);
	//fun2(n);
	return 0;
}