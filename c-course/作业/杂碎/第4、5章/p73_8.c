#include<stdio.h>
void main()
{
    int x;
    int a,b,c,d;
    printf("输入一个5位数（判断回文数）：");
    scanf("%d",&x);
    a=x/10000;
    b=x%10000/1000;
    c=x%10000%1000%100/10;
    d=x%10000%1000%100%10/1;
    if ((a==d)&&(b==c))
    printf("是");
    else printf("不是");
    }