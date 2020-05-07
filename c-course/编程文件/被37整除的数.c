#include<stdio.h>
void main()
{
    int d;
    printf("请输入一个整数");
    scanf("%d",&d);
    if (!(0>d/100&&d/100>10))
      if (d%37==0)
         printf("是");
     else
         printf("不是");
    else
    printf("不是");
    }