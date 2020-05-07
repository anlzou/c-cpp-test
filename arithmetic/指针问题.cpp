#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void scanfshu(char (*a)[20],int *m,int index){
	int n=1;
	int i=0;
	while(n){
		gets(a[i]);
		scanf("%d",&n);
		*(m+i)=n;
		i++;
	}
	scanf("%d",&index);
}

void printshu(int m[]){
	printf("%d",m[1]);	
} 
int main(){
	char a[20][20];
	int m[20];
	int index;
	printf("Ñù±¾ÊäÈë£º");
	scanfshu(a,m,index);
	printshu(m);	
	return 0;
} 

