#include<stdio.h>
void inSort(int a[], int n){		//数据要大于3个 
	int i,j;
	for(i = 2; i<=n; i++){
		a[0] = a[i];
		j = i - 1;
		while(a[0]<a[j]){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = a[0];
	}
}
