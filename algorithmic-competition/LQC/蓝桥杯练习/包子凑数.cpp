#include<stdio.h>
int main()
{
	int n,i;
	int a[10];
	scanf("%d",&n);
	if(n<1 || n>100)
		return 1;
	
	while((scanf("%d",&a[i++])!=1 && i<n))
		if((a[i-1]<0)||(i>=n))
			return 1;
	
	printf("yes!\n");	
//	for(i=0,i<n;i++)
//		scanf("%d",&a[i]);	
	return 0;
}
