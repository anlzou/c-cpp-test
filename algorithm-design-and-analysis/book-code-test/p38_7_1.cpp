//erro
#include<stdio.h>
int main(){
	int n,half;
	scanf("%d",&n);
	half = n/2;
	//printf("%d",half);
	int data[n],data_new[n];
	int i,j,k=1;
	int t;
	for(i = 0; i < n; i++){
		scanf("%d",&data[i]);
	}
	
	//拷贝数组 
	for(i = 0; i < n; i++){
		data_new[i] = data[i];
	}
	
	//冒泡排序 
	for (i = 0; i < n-1; i++){							/*变量i代表比较的趟数*/
	    for (j = i+1; j < n; j++){						/*变量j代表每趟两两比较的次数*/
	    	if (data_new[i] > data_new[j])
	    	{
	        	t = data_new[i];									/*利用中间变量实现俩值互换*/
	        	data_new[i] = data_new[j];
	        	data_new[j] = t;
	    	}
		if(data_new[i+1] == data_new[i]){
			k += 1;
		}else
			k = 1;
		}
		if(k > half){
			printf("%d",data_new[i]);
			return 0;	
		}
	}
	printf("no!");
	return 0;
} 
