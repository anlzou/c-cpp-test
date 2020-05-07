#include<stdio.h>
void main()
{
    float x,y;
    scanf("%f",&x);
    if (x<0) y=x*x-1;
    else if (0<=x<1) y=x*x;
    else if (x>=1) y=x*x+1;
    printf("%f",y);
    }