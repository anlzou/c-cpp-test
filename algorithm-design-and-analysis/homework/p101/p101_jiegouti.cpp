#include<iostream>
#include<malloc.h>
using namespace std;
int indexLeft = 0,indexRight = 0;	//每层递归定位最大子数组的左右两边位置 
long sum;					//每层递归子数组的和 

typedef struct{				//定义结构体，保存每层递归运算的子数组左边和右边的下标 
	long add;
	int left;				//保存左边下标
	int right;				//保存右边下标
}DATA;
DATA data;

long max3(long a, long b, long c){			//求出3个long中的最大值 
	if(a < b)
		a = b;								//用a保存a、b中的最大值
	if(a > c)
		return a;							//比较返回a、c中的最大值 	
	else
		return c;		
}

void printArray(int a[], int len){
	int i;
	cout<<"序列元素：";
	for(i = 0; i < len; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void printSubarray(int a[]){			//输出数组最大子序列 
	int i;
	cout<<"子序列为："<<endl;
	if(data.add == 0){
		cout<<"无数据"<<endl<<endl; 
		return;	
	}
	for(i = data.left; i <= data.right; i++)
		cout<<a[i]<<" ";
	cout<<endl<<endl;
	data.add = 0;
	data.left = 0;
	data.right = 0;
} 

long maxSubSum(int a[], int left, int right){	//求a[left..right]序列中的最大连续子序列和 
	int i,j;
	long maxLeftSum = 0,maxRightSum = 0;
	long maxLeftBorderSum,leftBorderSum;
	long maxRightBorderSum,rightBorderSum;
	if(left == right){							//当子序列只有一个元素时 
		if(a[left] > 0){						//该元素大于0时返回它
			sum = a[left];
			if(sum > data.add){
				data.add = sum;
				data.left = left;
				data.right = left;	
			}
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
			maxLeftBorderSum = leftBorderSum;
			indexLeft = i;
		}
	}
	maxRightBorderSum = 0,rightBorderSum = 0;
	for(j = mid+1; j <= right; j++){			//求出a[mid]右边元素构成的序列的最大和 
		rightBorderSum += a[j];
		if(rightBorderSum > maxRightBorderSum){	
			maxRightBorderSum = rightBorderSum;
			indexRight = j;
		}
	}
	
	sum = maxLeftBorderSum+maxRightBorderSum;
	if(sum >= data.add){
		data.add = sum;
		data.left = indexLeft;
		data.right = indexRight;	
	}
	return max3(maxLeftSum, maxRightSum, maxLeftBorderSum+maxRightBorderSum);
}

int main(){
	int a[] = {-2,11,-4,13,-5,2}, len_a = 6;		//数据在中间 
	int b[] = {-6,2,4,-7,5,3,2,-1,6,-9,10,-2},len_b = 12;	//数据在中间 
	int c[] = {-1,-2},len_c = 2;					//没有,error
	int d[] = {2,6,-10,-2,1,-2,-5},len_d = 7;		//数据在左边 
	int e[] = {-2,1,2,5,8,-6,3},len_e = 7; 			//数据在中间 
	int f[] = {-1,-1,1,-4,5,0,3},len_f = 7;			//数据在右边 
	int g[] = {0,1,2,3},len_g = 4;						//
	
	printArray(a, len_a);
	cout<<"序列的最大连续子序列的和："<<maxSubSum(a, 0, len_a-1)<<endl;
	printSubarray(a);
	
	printArray(b, len_b);
	cout<<"序列的最大连续子序列的和："<<maxSubSum(b, 0, len_b-1)<<endl;
	printSubarray(b);
	
	printArray(c, len_c);
	cout<<"序列的最大连续子序列的和："<<maxSubSum(c, 0, len_c-1)<<endl;
	printSubarray(c);

	printArray(d, len_d);
	cout<<"序列的最大连续子序列的和："<<maxSubSum(d, 0, len_d-1)<<endl;
	printSubarray(d);
	
	printArray(e, len_e);
	cout<<"序列的最大连续子序列的和："<<maxSubSum(e, 0, len_e-1)<<endl;
	printSubarray(e);

	printArray(f, len_f);
	cout<<"序列的最大连续子序列的和："<<maxSubSum(f, 0, len_f-1)<<endl;
	printSubarray(f);

	printArray(g, len_g);
	cout<<"序列的最大连续子序列的和："<<maxSubSum(g, 0, len_g-1)<<endl;
	printSubarray(g);
}




