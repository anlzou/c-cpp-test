#include<stdio.h>
int main()
{
	int a,b,c;//5,3,1
	for(a=0;a<20;a++)
	for(b=0;b<33;b++)
	for(c=0;c<99;c+=3)
	if(a+b+c==100&&a*5+b*3+c/3==100)
	printf("%d %d %d\n",a,b,c);
	getchar();
	return 0;
}
