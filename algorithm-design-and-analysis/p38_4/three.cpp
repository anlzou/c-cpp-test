#include<stdio.h>
int main(){
	int n;
	int i = 2;
	int j = 2;

	for(j; j < 100; j++)
	{
		i = 2;
		for(i;i < j/2+1; i++){
			if(j%i == 0)
				break;
		}
		if(i==j/2+1)
			printf("%d ",j);
	}
	return 0;
}
