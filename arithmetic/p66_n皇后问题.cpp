//error
#include<iostream>
#include<stdlib.h>
#define N 20							//���ʺ���� 
int q[N];								//��Ÿ����ʺ����ڵ��кţ���(i,q[i])Ϊһ���ʺ�λ�� 
int count = 0; 							//�ۼƽ���� 
using namespace std;

void dispasolution(int n){				//���n�ʺ������һ����
	int i;
	cout<<"��"<<++count<<"���⣺";
	for(i = 1; i <= n; i++)
		cout<<"("<<i<<","<<q[i]<<")";
	cout<<endl; 
}

bool place(int i, int j){				//����(i,j)λ���ܷ�Żʺ� 
	if(i == 1)							//��һ���ʺ����ǿ��Է��� 
		return true;
	int k = 1;
	while(k < i){						//k = 1~i-1���Ѿ������˻ʺ���� 
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
	int n;							//n���ʵ�ʻʺ�ĸ��� 
	cout<<"�ʺ�����(n<20)n=";
	cin>>n;
	if(n > 20)
		cout<<"nֵ̫�󣬲�����⣡";
	else{
		cout<<n<<"�ʺ�����Ľ����£�"<<endl;
		queen(1,n);
	} 
	return 0;
}
