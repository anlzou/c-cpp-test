#include<stdio.h>
int main(){
	int n;
	printf("输入整数个数：");
	scanf("%d",&n);
	int data[n];
	int i,j,k;
	int t;
	int l = 0;	//不存在标记

	for(i = 0; i < n; i++){
		scanf("%d",&data[i]);
	}
	 
	printf("输入k值：");
	scanf("%d",&k);
	
	//循环匹配
	for(i = 0; i < n; i++){
		t = k - data[i];
		for(j = i+1; j < n; j++){
			if(t == data[j]){
				printf("(%d,%d) ",data[i],data[j]);
				l = 1; 
				continue;
			}
		}
	}
	if(!l)
		printf("no!");	
	return 0;
} 
