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
	
	//�������� 
	for(i = 0; i < n; i++){
		data_new[i] = data[i];
	}
	
	//ð������ 
	for (i = 0; i < n-1; i++){							/*����i����Ƚϵ�����*/
	    for (j = i+1; j < n; j++){						/*����j����ÿ�������ȽϵĴ���*/
	    	if (data_new[i] > data_new[j])
	    	{
	        	t = data_new[i];									/*�����м����ʵ����ֵ����*/
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
