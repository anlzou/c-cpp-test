#include"BasicFun.cpp"
void selectSort(int a[],int n){
	int i,j;
	int t;
    for(i=1; i<n; i++){
    	for(j = i+1; j<n; j++){
    		if(a[j]<a[i]){
    			t = a[i];
    			a[i] = a[j];
    			a[j] = t;
    		}
    	}
    }
}
