#include<stdio.h>
void main()
{
    void fun(int x);
    int x;
    printf("输入一个数字（100～1000）：");
    do
    {
    scanf("%d",&x);
    }while (x<100&&x>1000);
    fun(x);
    }
    
void fun(int x)
{
    int a,b,c,d;
    a=x/1000;//千位
    b=x%1000/111;
    c=x%1100/11;
    d=x%1110/1;
    
    
    }