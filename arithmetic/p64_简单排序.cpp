#include<iostream>
typedef int TYPE;
using namespace std;

//���������� 
void swap(TYPE &x, TYPE &y){
	TYPE temp;
	temp = x;
	x = y;
	y = temp;
}

//����������е�ֵ 
void disp(TYPE a[], TYPE n){
	int i;
	for(i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

//�ݹ��ѡ�������㷨 
void selectSort(TYPE a[], TYPE n, TYPE i){
	int j,k;
	if((i == n-1) || (i < 0))
		return;
	else{
		k = i;
		for(j = i+1; j < n; j++)
			if(a[j] < a[k])
				k = j;
		if(k != i)
			swap(a[i], a[k]);
		selectSort(a, n, i+1);
	}
} 

int main(){
	int n = 10;
	TYPE a[] = {2,5,1,7,10,6,9,4,3,8};
	
	cout<<"����ǰ��";
	disp(a, n);
	
	selectSort(a, n, 0);
	cout<<"�����";
	disp(a, n);
	return 0;
} 
