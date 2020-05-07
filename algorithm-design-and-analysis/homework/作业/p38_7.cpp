#include<stdio.h>
int main(){
	int n,half;
	scanf("%d",&n);
	half = n/2;
	
	int data[n],data_new[n];
	int i,j,k;
	int t;
	for(i = 0; i < n; i++){
		scanf("%d",&data[i]);
	}
	
	//拷贝数组 
	for(i = 0; i < n; i++){
		data_new[i] = data[i];
	}
	
	//选择排序 
	for (i = 0; i < n-1; i++)							
	    for (j = i+1; j < n; j++)						
	    	if (data_new[i] > data_new[j])
	    	{
	        	t = data_new[i];						
	        	data_new[i] = data_new[j];
	        	data_new[j] = t;
	    	}
	    	
	//分段计算数量
	k = 1;  	
	for(i = 0; i < n-1; i++){
		if(data_new[i+1]==data_new[i]){
			k += 1;
		}else{
			k = 1;
		}
		if(k > half){
			printf("%d ",data_new[i]);
			return 0;
		}
	}
	printf("no!");
	return 0;
} 
