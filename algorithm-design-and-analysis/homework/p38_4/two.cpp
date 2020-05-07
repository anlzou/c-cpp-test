#include<stdio.h>
#include<math.h>
int main(){
	int i = 2;
	int j = 0;
	for(j = 2; j < 100; j++)
	{
		i = 2;
		for(i; i< sqrt(j)+1; i++){
			if(j%i == 0)
				break;
		}
		if(i>sqrt(j))
			printf("%d ",j);
	}
	return 0;
}
