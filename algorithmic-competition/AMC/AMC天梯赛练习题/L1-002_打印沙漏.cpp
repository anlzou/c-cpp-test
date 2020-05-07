#include<math.h>
int fun_(int n);
void fun(int n,char c){
	int i,j,k;
	k = fun_(n);
	for(i = k;i>0;i--){
		for(j=k-i;j>0;j--)
			printf("  ");
		for(j=2*i-1;j>0;j--)
			printf("%c ",c);
		printf("\n");
	}
	for(i = 1;i<=k-1;i++){
		int k1=i;
		for(j=k-i-1;j>0;j--)
			printf("  ");
		for(j=1;j<=2*k1+1;j++)
			printf("%c ",c);
		printf("\n");
	}
}

int fun_(int n){
	int i=1;
	i = log2((n-1)/2);
	return i;
}

int fun1(int n){
	int x = fun_(n);
	int y = pow(2,x+1)+1;
	int z = n-y;
	return z;
}
