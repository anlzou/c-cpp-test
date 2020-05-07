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

//����������еĺ͡�ȫ�ֱ���(x = ��ʼ����, y = ��ֹ���� )
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
    return max;
}

int main(){
	int arr1[] = {1,2,-3,4,5},n1 = 5;
	int arr2[] = {1,-2,3,4,-5},n2 = 5;
	int arr3[] = {1,2,-3,-4,5},n3 = 5;
	disp_array(arr1, n1);
	cout<<"��������к�Ϊ��"<<max_child(arr1, n1)<<endl;
	disp_subarray(arr1);
	cout<<endl;
	
	disp_array(arr2, n2);
	cout<<"��������к�Ϊ��"<<max_child(arr2, n2)<<endl;
	disp_subarray(arr2);
	cout<<endl;
	
	
	disp_array(arr3, n3);
	cout<<"��������к�Ϊ��"<<max_child(arr3, n3)<<endl;
	disp_subarray(arr3);
	cout<<endl;
	return 0;
}
