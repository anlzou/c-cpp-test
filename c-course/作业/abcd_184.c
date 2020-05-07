#include<stdio.h>
void main()
{
    int min(int x,int y);
    int a,b,c,d,result;
    printf("请输入整数a b c d：");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    result=min(a,b);
    result=min(c,result);
    result=min(d,result);
    printf("最小的数是：%d\n",result);
    }
    
int min(int x,int y)
{
    int f;
    if (x<y) f=x;
    else f=y;
    return f;
    }