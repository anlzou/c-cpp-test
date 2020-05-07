#include<stdio.h>
void main()
{
    int a,b,c,d;
    int temp,min,secmax,max;
    printf("输入三个整数:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
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
        
      if (a>d)   
     {
        temp=a;
        a=d;
        d=temp;
        }
        
       if (b>c)   
     {
        temp=b;
        b=c;
        c=temp;
        }
        
        if (c>d)   
     {
        temp=c;
        c=d;
        d=temp;
        }
        
        if (b>c)   
     {
        temp=b;
        b=c;
        c=temp;
        }
    min=a;
    secmax=c;
    max=d;    
        printf("四个数从小到大排序:%d %d %d %d\n",a,b,c,d);
        printf("最小的数是:%d\n",min);
        printf("较大的数和最大的数:%d %d",secmax,max);
    }