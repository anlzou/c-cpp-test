#include<stdio.h>
int main(){
	int n;
	printf("��������������");
	scanf("%d",&n);
	int data[n];
	int i,j,k;
	int t;
	int l = 0;	//�����ڱ��

	for(i = 0; i < n; i++){
		scanf("%d",&data[i]);
	}
	 
	printf("����kֵ��");
	scanf("%d",&k);
	
	//ѭ��ƥ��
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
