//未完成 
//128468643043731391252
//449177399146038697307
#include<stdio.h>
#define M 1000000000000000000000
int main()
{
	long long  x,y;
	long long i=0,j,k;
	long long a[M],b[M];//个位，十位，百位，千位 ，万位，十万位，百万位，千万位 
	//printf("输入一个整数：");
	//scanf("%d",&x);
	for(x=10000000000000000000;x<100000000000000000000;x++)
	{
	y=x;
	while(x)//用来求各个位的数，数组从最高位保存 
	{
		a[i]=x%10;
		x/=10;
		i++;
		printf("%d\n",a[i-1]);
	}
	b[i]=0;
	for(j=0;j<i;j++)
	{
		b[j]=1;
		for(k=0;k<i;k++)
		{
			b[j]*=a[j];
		}
		//printf("%d\n",b[j]);
		b[i]+=b[j];
    }
    //printf("%d",b[i]);
    if(b[i]==y)
    printf("是花朵数");
    else 
    printf("不是花朵数"); 
    return 0;
    }
}
