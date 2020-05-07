#include<iostream>
#include<malloc.h>
using namespace std;
int indexLeft = 0,indexRight = 0;	//ÿ��ݹ鶨λ������������������λ�� 
long sum;					//ÿ��ݹ�������ĺ� 

typedef struct{				//����ṹ�壬����ÿ��ݹ��������������ߺ��ұߵ��±� 
	long add;
	int left;				//��������±�
	int right;				//�����ұ��±�
}DATA;
DATA data;

long max3(long a, long b, long c){			//���3��long�е����ֵ 
	if(a < b)
		a = b;								//��a����a��b�е����ֵ
	if(a > c)
		return a;							//�ȽϷ���a��c�е����ֵ 	
	else
		return c;		
}

void printArray(int a[], int len){
	int i;
	cout<<"����Ԫ�أ�";
	for(i = 0; i < len; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void printSubarray(int a[]){			//���������������� 
	int i;
	cout<<"������Ϊ��"<<endl;
	if(data.add == 0){
		cout<<"������"<<endl<<endl; 
		return;	
	}
	for(i = data.left; i <= data.right; i++)
		cout<<a[i]<<" ";
	cout<<endl<<endl;
	data.add = 0;
	data.left = 0;
	data.right = 0;
} 

long maxSubSum(int a[], int left, int right){	//��a[left..right]�����е�������������к� 
	int i,j;
	long maxLeftSum = 0,maxRightSum = 0;
	long maxLeftBorderSum,leftBorderSum;
	long maxRightBorderSum,rightBorderSum;
	if(left == right){							//��������ֻ��һ��Ԫ��ʱ 
		if(a[left] > 0){						//��Ԫ�ش���0ʱ������
			sum = a[left];
			if(sum > data.add){
				data.add = sum;
				data.left = left;
				data.right = left;	
			}
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
			maxLeftBorderSum = leftBorderSum;
			indexLeft = i;
		}
	}
	maxRightBorderSum = 0,rightBorderSum = 0;
	for(j = mid+1; j <= right; j++){			//���a[mid]�ұ�Ԫ�ع��ɵ����е����� 
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
	int a[] = {-2,11,-4,13,-5,2}, len_a = 6;		//�������м� 
	int b[] = {-6,2,4,-7,5,3,2,-1,6,-9,10,-2},len_b = 12;	//�������м� 
	int c[] = {-1,-2},len_c = 2;					//û��,error
	int d[] = {2,6,-10,-2,1,-2,-5},len_d = 7;		//��������� 
	int e[] = {-2,1,2,5,8,-6,3},len_e = 7; 			//�������м� 
	int f[] = {-1,-1,1,-4,5,0,3},len_f = 7;			//�������ұ� 
	int g[] = {0,1,2,3},len_g = 4;						//
	
	printArray(a, len_a);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(a, 0, len_a-1)<<endl;
	printSubarray(a);
	
	printArray(b, len_b);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(b, 0, len_b-1)<<endl;
	printSubarray(b);
	
	printArray(c, len_c);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(c, 0, len_c-1)<<endl;
	printSubarray(c);

	printArray(d, len_d);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(d, 0, len_d-1)<<endl;
	printSubarray(d);
	
	printArray(e, len_e);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(e, 0, len_e-1)<<endl;
	printSubarray(e);

	printArray(f, len_f);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(f, 0, len_f-1)<<endl;
	printSubarray(f);

	printArray(g, len_g);
	cout<<"���е�������������еĺͣ�"<<maxSubSum(g, 0, len_g-1)<<endl;
	printSubarray(g);
}




