//未成功 
#include<stdio.h>
int main()
{
	unsigned long x,y;
	unsigned long a[20];
	int i;
	int j,k;
	do
	{
		i=1;
	    printf("输入银行卡号：");
	    scanf("%d",&x);
	while(x)//用来求各个位的数，数组从最高位保存
	{
		a[i]=x%10;
		x/=10;
		i++;
		printf("%d\n",a[i-1]);
    }
    i-=1;
    if(i%2!=0)
    {
    for(j=1;j<=i;)
    {
    	a[j+=2]+=a[j];
    } 
	for(k=2;k<=i-1;)
	{
		a[k]*=2;
		if(a[k]>9)
		a[k]-=9;
		a[k+=2]+=a[k];
	}
    }
    else
    {
    for(j=1;j<=i-1;)
    {
    	a[j+=2]+=a[j];
    } 
	for(k=2;k<=i;)
	{
		a[k]*=2;
		if(a[k]>9)
		a[k]-=9;
		a[k+=2]+=a[k];
	}
    }
	    y=(a[j]+a[k])%10;
	    if(y!=0)
	    printf("卡号验证错误!\n");
    }while(y!=0);
    printf("卡号验证正确。"); 
	return 0;
} 
