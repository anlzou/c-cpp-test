#include<iostream>
#include<malloc.h>
using namespace std;
int ans = 0;

void disp(int a[], int n){
	int i;
	for(i = 0; i < n; i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void Merge(int a[], int low, int mid, int high){
	int *tmpa;
	int i = low,j = mid+1,k = 0;
	tmpa = (int *)malloc((high+low+1)*sizeof(int));
	while(i <= mid && j <= high)
		if(a[i] <= a[j]){
			tmpa[k++] = a[i++];
		}else{
			tmpa[k++] = a[j++];
			ans += mid-i+1;
		}
		while(i <= mid)
			tmpa[k++] = a[i++];
		while(j <= high)
			tmpa[k++] = a[j++];
		for(k = 0,i = low; i <= high; k++,i++)
			a[i] = tmpa[k];
		free(tmpa);
}

void MergeSort(int a[], int low, int high){
	int mid;
	if(low < high){
		mid = (high-low)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, mid, high);
	}
}

void Inversion(int a[], int n){
	MergeSort(a, 0, n);
}

int main(){
	int a[] = {3,1,4,5,2};
	int i;
	int n = sizeof(a)/sizeof(a[0]);
	for(i = 0; i < n; i++)
		cout<<a[i]<<" ";
	Inversion(a, n-1);
	cout<<ans<<endl;
	disp(a,n);
	return 0;
}
