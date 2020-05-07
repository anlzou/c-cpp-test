#include<stdio.h>
#include<string.h>
int pave,nave;
int saver(int a[],int n)
{
	int b=0,c=0;
	int x=0,y=0;
	int i;
	for(i=0;i<n;i++)
	{
	if(a[i]>0)
	{
		b+=a[i];
		x++;
	}
	else if(a[i]<0)
	{
		c+=a[i];
	    y++;
	}
    }
	return pave=b/x,nave=c/y;
}
int main()
{
	int n=0;
	int a[10];
	do
	{
		scanf("%d",&a[n]);
	}while(a[n++]!=0);
	saver(a,n);
	printf("正数的平均值：%d 负数的平均值：%d",pave,nave);
	return 0;
}
