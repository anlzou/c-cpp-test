#include<iostream>
#include<malloc.h>
#define N 20
using namespace std;
int indexLeft = 99,indexRight = -99;

long max3(long a, long b, long c){				//���3��long�е����ֵ 
	if(a < b) a = b;							//��a����a��b�е����ֵ 
	if(a > c) return a;							//�ȽϷ���a��c�е����ֵ 
	else return c;
}

void printArray(int a[], int len){
	int i;
	cout<<"����Ԫ�أ�";
	for(i = 0; i < len; i++)
		cout<<a[i]<<" ";
	cout<<endl; 
}

void printSubarray(int a[], int index_left, int index_right){			//���data_son������ 
	int i;
	cout<<"������Ϊ��"; 
	for(i = index_left; i <= index_right; i++)
		cout<<a[i]<<" ";
	cout<<endl<<endl;
} 

long maxSubSum(int a[], int left, int right){	//��a[left..right]�����е�������������к� 
	int i,j;
	long maxLeftSum,maxRightSum;
	long maxLeftBorderSum,leftBorderSum;
	long maxRightBorderSum,rightBorderSum;
	if(left == right){							//��������ֻ��һ��Ԫ��ʱ 
		if(a[left] > 0){						//��Ԫ�ش���0ʱ������ 
			indexLeft = 0;						//ֻ��һ��Ԫ��ʱ��ʼ�� 
			indexRight = 0;						//ֻ��һ��Ԫ��ʱ��ʼ�� 
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
		if(leftBorderSum > maxLeftBorderSum){
			if(indexLeft > i)
				indexLeft = i;
			maxLeftBorderSum = leftBorderSum;	
		}
	}
	maxRightBorderSum = 0,rightBorderSum = 0;
	for(j = mid+1; j <= right; j++){			//���a[mid]�ұ�Ԫ�ع��ɵ����е����� 
		rightBorderSum += a[j];
		if(rightBorderSum > maxRightBorderSum){
			if(indexRight < j)
				indexRight = j;
			maxRightBorderSum = rightBorderSum;
		}
	}
	return max3(maxLeftSum, maxRightSum, maxLeftBorderSum+maxRightBorderSum);
}

int main(){
	int a[] = {-2,11,-4,13,-5,-2}, len_a = 6;
	int b[] = {-6,2,4,-7,5,3,2,-1,6,-9,10,-2},len_b = 12;
	int c[] = {2},len_c = 1;
	int d[] = {2,6,-10,2,1,2,-5},len_d = 7;
	//int e[] = {-2,11,-4,13,-5,-2},len_e = 6;
	//int f[] = {-6,2,4,-7,5,3,2,-1,6,-9,10,-2},len_f = 12;
	//int g[] = {-2,1,2,5,8,-6,3},len_g = 7; 
	
	printArray(a, len_a);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(a, 0, len_a-1)<<endl;
	printSubarray(a, indexLeft, indexRight);
	
	//printArray(b, len_b);
	//cout<<"���е�������������еĺͣ�"<<maxSubSum(b, 0, len_b-1)<<endl;
	//printSubarray(b, indexLeft, indexRight);
	
	//printArray(c, len_c);
	//cout<<"���е�������������еĺͣ�"<<maxSubSum(c, 0, len_c-1)<<endl;
	//printSubarray(c, indexLeft, indexRight);
	
	//printArray(d, len_d);
	//cout<<"���е�������������еĺͣ�"<<maxSubSum(d, 0, len_d-1)<<endl;
	//printSubarray(d, indexLeft, indexRight);
}




