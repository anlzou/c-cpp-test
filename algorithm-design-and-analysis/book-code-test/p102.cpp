#include<iostream>
#include<malloc.h>
#define N 20
using namespace std;

int data_left[N], data_right[N], data_son[N];	//������ߵ������С��ұߵ������С��������ߺϲ��������� 

long max3(long a, long b, long c){				//���3��long�е����ֵ 
	if(a < b) a = b;							//��a����a��b�е����ֵ 
	if(a > c) return a;							//�ȽϷ���a��c�е����ֵ 
	else return c;
} 

void son(int a[], int b[]){						//�ϲ�����data_left��data_right������������data_son 
	int len_a = sizeof(a)/sizeof(int);
	int len_b = sizeof(b)/sizeof(int);
	int len_son = 0, k = 0;
	while(len_a--)								//��������� 
		data_son[len++] = a[len_a];
	while(len_b--)								//�������Ҵ� 
		data_son[len++] = b[k++];
} 

void printSon(int a[]){							//���data_son������ 
	int len_son = sizeof(a)/sizeof(int);
	int i;
	for(i = 0; i < len_son; i++)
		cout<<a[i]<<" ";
} 

long maxSubSum(int a[], int left, int right){	//��a[left..right]�����е�������������к� 
	int i,j;
	long maxLeftSum,maxRightSum;
	long maxLeftBorderSum,leftBorderSum;
	long maxRightBorderSum,rightBorderSum;
	if(left == right){							//��������ֻ��һ��Ԫ��ʱ 
		if(a[left] > 0){						//��Ԫ�ش���0ʱ������ 
			son(a[0]);
			return a[left];	
		}
		else									//��Ԫ��С�ڻ����0ʱ����0 
			return 0;
	}
	int mid = (left+right)/2;					//���м�λ�� 
	maxLeftSum = maxSubSum(a, left, mid);		//����ߵ��������������֮�� 
	maxRightSum = maxSubSum(a, mid+1, right);	//���ұߵ��������������֮�� 
	maxLeftBorderSum = 0,leftBorderSum = 0;
	for(i = mid; i >= left; i--){				//�������߼���a[mid]Ԫ�ع��ɵ����е����� 
		leftBorderSum += a[i];
		if(leftBorderSum > maxLeftBorderSum)
			maxLeftBorderSum = leftBorderSum;
	}
	maxRightBorderSum = 0,rightBorderSum = 0;
	for(j = mid+1; j <= right; j++){			//���a[mid]�ұ�Ԫ�ع��ɵ����е����� 
		rightBorderSum += a[j];
		if(rightBorderSum > maxRightBorderSum)
			maxRightBorderSum = rightBorderSum;
	}
	return max3(maxLeftSum, maxRightSum, maxLeftBorderSum+maxRightBorderSum);
}

int main(){
	int a[] = {-2,11,-4,13,-5,-2}, n = 6;
	int b[] = {-6,2,4,-7,5,3,2,-1,6,-9,10,-2},m = 12;
	cout<<"a���е�������������еĺͣ�"<<maxSubSum(a, 0, n-1)<<endl;
	cout<<"b���е�������������еĺͣ�"<<maxSubSum(b, 0, m-1)<<endl;
}




