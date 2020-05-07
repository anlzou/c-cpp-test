#include<stdio.h>
void main()
{
    int x;
    A:
    printf("输入一个数（判断能被37整除的3位数）：");
    scanf("%d",&x);
    if ((x>99)&&(x<1000))
    {
       if (x%37==0) printf("这个数是。");
       else printf("这个数不是。");
    }
    else 
    {
    printf("这个数不是3位数的正整数。\n\n");
    goto A;
    }
}