#include<stdio.h>
void main()
{    
    int a,b,c;
    int x;
    for (int i=100;i<=999;i++)
    {
    a=i/100;//百位
    b=i%100/10;//十位
    c=i%100%10/1;//个位
    x=a*a*a+b*b*b+c*c*c;
    if (i==x) printf("%d = %d*%d*%d + %d*%d*%d + %d*%d*%d\n",i,a,a,a,b,b,b,c,c,c);
    }
}