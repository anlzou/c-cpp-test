#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("输入数字100～999：");
    scanf("%d",&d);
    a=d/100;
    b=d%100/10;
    c=d%100%10;
    if (d==a*a*a+b*b*b+c*c*c)
    printf("三位数是水仙花数\n");
    else
    printf("三位数不是水仙花数\n");
    }