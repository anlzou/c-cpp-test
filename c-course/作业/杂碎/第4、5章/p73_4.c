#include<stdio.h>
void main()
{
    int x;
    printf("输入一个数字（判断是5和9的倍数）：");
    scanf("%d",&x);
    if ((x%5==0)&&(x%9==0)) printf("这个数是。");
    else printf("这个数不是。");
    }