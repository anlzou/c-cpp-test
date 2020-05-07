#include<iostream>
#include<malloc.h>
#define N 20
using namespace std;

int data_left[N], data_right[N], data_son[N];	//保存左边的子序列，右边的子序列，左右两边合并的子序列 
int lenLeftSon = 0, lenRightSon = 0, lenSon = 0;	//保存左子序列的长度，右子序列的长度，子序列的长度 

long max3(long a, long b, long c){				//求出3个long中的最大值 
	if(a < b) a = b;							//用a保存a、b中的最大值 
	if(a > c) return a;							//比较返回a、c中的最大值 
	else return c;
} 

void son(int a[], int b[], int len_a, int len_b){	//合并序列data_left、data_right到子序列数组data_son 
	int len_son = 0, k = 0;
	while(len_a--)								//从右往左存 
		data_son[len_son++] = a[len_a];
	while(len_b--)								//从左往右存 
		data_son[len_son++] = b[k++];
} 

void printSon(int a[], int len_son){							//输出data_son子序列 
	int i;
	if(len_son > 0){
		cout<<"a子序列为:";
		for(i = 0; i < len_son; i++)
			cout<<a[i]<<" ";	
	}else{
		cout<<"a子序列为:null";
	}
} 

long maxSubSum(int a[], int left, int right){	//求a[left..right]序列中的最大连续子序列和 
	int i,j;
	long maxLeftSum,maxRightSum;
	long maxLeftBorderSum,leftBorderSum;
	long maxRightBorderSum,rightBorderSum;
	if(left == right){							//当子序列只有一个元素时 
		if(a[left] > 0)							//该元素大于0时返回它  
			return a[left];	
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
			data_left[lenLeftSon++] = a[i];
			maxLeftBorderSum = leftBorderSum;
		} 
	}
	maxRightBorderSum = 0,rightBorderSum = 0;
	for(j = mid+1; j <= right; j++){			//求出a[mid]右边元素构成的序列的最大和 
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
		cout<<"a序列的最大连续子序列的和："<<maxSubSum(a, 0, n-1)<<endl;
	//lenSon = (lenLeftSon>0?lenLeftSon-1:lenLeftSon)+(lenRightSon>0?lenRightSon-1:lenRightSon);
	son(data_left, data_right, lenLeftSon, lenRightSon);
	lenSon = lenLeftSon+lenRightSon;
	printSon(data_son, lenSon);
	//cout<<"b序列的最大连续子序列的和："<<maxSubSum(b, 0, m-1)<<endl;
}




