#include<stdio.h>
int main()
{
	int x;
	int i=0,j;
	int a[5];
	printf("����һ����λ����");
	scanf("%d",&x);
	while(x)
	{
		a[i++]=x%10;
		x/=10;
	}
	for(j=0;j<i;j++,i--)
	{
	if(a[i-1]!=a[j])
	{
	printf("���ǡ�");
	goto A;
    }
	}
	printf("�ǡ�"); 
	A:
	getchar(); 
	getchar(); 
	return 0;
}
