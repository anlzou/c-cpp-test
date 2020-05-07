#include<stdio.h>
int main(){
	int n;
	int i = 2;
	//scanf("%d",&n);
	int j = 2;

	for(j; j<100; j++)
	{
		i = 2;
		for(i;i < j; i++){
			if(j%i == 0)
				break;
		}
		if(i==j)
			printf("%d ",j);
	}
	return 0;
}