#include<stdio.h>
int main()
{
	int y;
	do{
	scanf("%d",&y);
	}while(y<1990 && y>2050);
	if(y%4==0 && y%100!=0 || y%400==0)
		printf("yes");
	else
		printf("no");
	return 0;
}
