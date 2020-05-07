#include<iostream>
#include<malloc.h>
#define N 20
using namespace std;

int data_left[N], data_right[N], data_son[N];	//������ߵ������У��ұߵ������У��������ߺϲ��������� 
int lenLeftSon = 0, lenRightSon = 0, lenSon = 0;	//�����������еĳ��ȣ��������еĳ��ȣ������еĳ��� 

long max3(long a, long b, long c){				//���3��long�е����ֵ 
	if(a < b) a = b;							//��a����a��b�е����ֵ 
	if(a > c) return a;							//�ȽϷ���a��c�е����ֵ 
	else return c;
} 

void son(int a[], int b[], int len_a, int len_b){	//�ϲ�����data_left��data_right������������data_son 
	int len_son = 0, k = 0;
	while(len_a--)								//��������� 
		data_son[len_son++] = a[len_a];
	while(len_b--)								//�������Ҵ� 
		data_son[len_son++] = b[k++];
} 

void printSon(int a[], int len_son){							//���data_son������ 
	int i;
	if(len_son > 0){
		cout<<"a������Ϊ:";
		for(i = 0; i < len_son; i++)
			cout<<a[i]<<" ";	
	}else{
		cout<<"a������Ϊ:null";
	}
} 

long maxSubSum(int a[], int left, int right){	//��a[left..right]�����е�������������к� 
	int i,j;
	long maxLeftSum,maxRightSum;
	long maxLeftBorderSum,leftBorderSum;
	long maxRightBorderSum,rightBorderSum;
	if(left == right){							//��������ֻ��һ��Ԫ��ʱ 
		if(a[left] > 0)							//��Ԫ�ش���0ʱ������  
			return a[left];	
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
			data_left[lenLeftSon++] = a[i];
			maxLeftBorderSum = leftBorderSum;
		} 
	}
	maxRightBorderSum = 0,rightBorderSum = 0;
	for(j = mid+1; j <= right; j++){			//���a[mid]�ұ�Ԫ�ع��ɵ����е����� 
		rightBorderSum += a[j];
		if(rightBorderSum > maxRightBorderSum){
			data_right[lenRightSon++] = a[j];
			maxRightBorderSum = rightBorderSum;	
		}
	}
	return max3(maxLeftSum, maxRightSum, maxLeftBorderSum+maxRightBorderSum);
}

int main(){
	int a[] = {13,2,-1}, n = 3;
	//int b[] = {-6,2,4,-7,5,3,2,-1,6,-9,10,-2},m = 12;
	if(n > 1)
		cout<<"a���е�������������еĺͣ�"<<maxSubSum(a, 0, n-1)<<endl;
	//lenSon = (lenLeftSon>0?lenLeftSon-1:lenLeftSon)+(lenRightSon>0?lenRightSon-1:lenRightSon);
	son(data_left, data_right, lenLeftSon, lenRightSon);
	lenSon = lenLeftSon+lenRightSon;
	printSon(data_son, lenSon);
	//cout<<"b���е�������������еĺͣ�"<<maxSubSum(b, 0, m-1)<<endl;
}




