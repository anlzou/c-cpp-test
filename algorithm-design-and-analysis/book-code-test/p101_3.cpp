#include<iostream>
#include<malloc.h>
#define N 20
using namespace std;
int indexLeft = 99,indexRight = -99;

long max3(long a, long b, long c){				//求出3个long中的最大值 
	if(a < b) a = b;							//用a保存a、b中的最大值 
	if(a > c) return a;							//比较返回a、c中的最大值 
	else return c;
}

void printArray(int a[], int len){
	int i;
	cout<<"序列元素：";
	for(i = 0; i < len; i++)
		cout<<a[i]<<" ";
	cout<<endl; 
}

void printSubarray(int a[], int index_left, int index_right){			//输出data_son子序列 
	int i;
	cout<<"子序列为："; 
	for(i = index_left; i <= index_right; i++)
		cout<<a[i]<<" ";
	cout<<endl<<endl;
} 

long maxSubSum(int a[], int left, int right){	//求a[left..right]序列中的最大连续子序列和 
	int i,j;
	long maxLeftSum,maxRightSum;
	long maxLeftBorderSum,leftBorderSum;
	long maxRightBorderSum,rightBorderSum;
	if(left == right){							//当子序列只有一个元素时 
		if(a[left] > 0){						//该元素大于0时返回它 
			indexLeft = 0;						//只有一个元素时初始化 
			indexRight = 0;						//只有一个元素时初始化 
			return a[left];
		}								
		else									//该元素小于或等于0时返回0 
			return 0;
	}
	int mid = (left+right)/2;					//求中间位置 
	maxLeftSum = maxSubSum(a, left, mid);		//求左边的最大连续子序列之和 
	maxRightSum = maxSubSum(a, mid+1, right);	//求右边的最大连续子序列之和 
	maxLeftBorderSum = 0,leftBorderSum = 0;
	for(i = mid; i >= left; i--){				//求出以左边加上a[mid]元素构成的序列的最大和 
		leftBorderSum += a[i];
		if(leftBorderSum > maxLeftBorderSum){
			if(indexLeft > i)
				indexLeft = i;
			maxLeftBorderSum = leftBorderSum;	
		}
	}
	maxRightBorderSum = 0,rightBorderSum = 0;
	for(j = mid+1; j <= right; j++){			//求出a[mid]右边元素构成的序列的最大和 
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
	cout<<"序列的最大连续子序列的和："<<maxSubSum(a, 0, len_a-1)<<endl;
	printSubarray(a, indexLeft, indexRight);
	
	//printArray(b, len_b);
	//cout<<"序列的最大连续子序列的和："<<maxSubSum(b, 0, len_b-1)<<endl;
	//printSubarray(b, indexLeft, indexRight);
	
	//printArray(c, len_c);
	//cout<<"序列的最大连续子序列的和："<<maxSubSum(c, 0, len_c-1)<<endl;
	//printSubarray(c, indexLeft, indexRight);
	
	//printArray(d, len_d);
	//cout<<"序列的最大连续子序列的和："<<maxSubSum(d, 0, len_d-1)<<endl;
	//printSubarray(d, indexLeft, indexRight);
}




