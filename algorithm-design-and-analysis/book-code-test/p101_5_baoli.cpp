//暴力法_求最大子序列 
#include<iostream>
using namespace std;
int x = 0,y = 0;					//最大子序列的起始坐标-终止坐标 

//输出原序列 
void disp_array(int arr[], int n){
	int i;
	cout<<"序列为："; 
	for(i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

//输出子序列 
void disp_subarray(int arr[]){
	int i;
	cout<<"最大子序列为："; 
	for(i = x; i <= y; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

//求最大子序列的和、起始坐标-终止坐标 
int max_child(int arr[],int n){
	int i,j,k;
	int max = 0;
	int arr_sum = 0;
	
    for(i = 0; i < n; i++){
    	for(j = i; j < n; j++){
        	arr_sum = 0;
            for(k = i; k <= j; k++)
            	arr_sum = arr_sum + arr[k];
            if(arr_sum >= max){
            	max = arr_sum;
                x = i;
                y = j;
			}
        }
    }
    //cout<<"最大组的起始坐标-结束坐标"<<x<<" "<<y<<endl;
    return max;
}

int main(){
	int arr[] = {1,2,-3,4,5},n = 5;
	disp_array(arr, n);
	cout<<"最大子序列和为："<<max_child(arr, n)<<endl;
	disp_subarray(arr);
	return 0;
}
