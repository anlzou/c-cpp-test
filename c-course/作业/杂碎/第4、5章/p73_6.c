#include<stdio.h>
void main()
{
    int a,b,c;
    int temp;
    printf("输入随意3个整数（升序输出）：");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
        }
    if (b>c)
    {
        temp=b;
        b=c;
        c=temp;
        }
    if (a>b)
    {
        temp=a;
        a=b;
        b=temp;
        }
        printf("%d<%d<%d",a,b,c);
    }