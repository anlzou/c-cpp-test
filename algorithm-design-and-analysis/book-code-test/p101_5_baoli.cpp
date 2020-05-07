//������_����������� 
#include<iostream>
using namespace std;
int x = 0,y = 0;					//��������е���ʼ����-��ֹ���� 

//���ԭ���� 
void disp_array(int arr[], int n){
	int i;
	cout<<"����Ϊ��"; 
	for(i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

//��������� 
void disp_subarray(int arr[]){
	int i;
	cout<<"���������Ϊ��"; 
	for(i = x; i <= y; i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}

//����������еĺ͡���ʼ����-��ֹ���� 
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
    //cout<<"��������ʼ����-��������"<<x<<" "<<y<<endl;
    return max;
}

int main(){
	int arr[] = {1,2,-3,4,5},n = 5;
	disp_array(arr, n);
	cout<<"��������к�Ϊ��"<<max_child(arr, n)<<endl;
	disp_subarray(arr);
	return 0;
}
