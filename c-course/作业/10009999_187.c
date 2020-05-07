#include<stdio.h>
void main()
{
    int x,a,b,c,d;
    printf("输入1000～9999的数字:");
    scanf("%d",&x);
    a=x/1000;
    b=x%1000/100;
    c=x%1000%100/10;
    d=x%1000%100%10/1;
    printf("千位%d\n百位%d\n十位%d\n个位%d\n",a,b,c,d);
    }