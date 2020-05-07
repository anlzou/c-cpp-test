#include<stdio.h>
void main()
{
    int a,b;
    int x;
    printf("输入2个数：");
    scanf("%d%d",&a,&b);
    if ((a*a+b*b)>100)
    {
    x=(a*a+b*b)/1000;//千位开始
    printf("百位以上的数字为：%d",x);
    }
    else printf("两数之和为：%d",a+b);
    }