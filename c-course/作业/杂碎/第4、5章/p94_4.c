#include<stdio.h>
void main()
{
    int a,b,c,d;
    long x,y=0;
    B:
    printf("输入一个整数(400000以内)：");
    scanf("%ld",&x);
    if ((x<0)||(x>400000))
    {
        printf("数不在400000以内\n");
        goto B;
        }
    for (a=0;a<=100;a++)
    {
        for (b=0;b<=100;b++)
        {
            for (c=0;c<=100;c++)
            {
                for (d=0;d<=100;d++)
                {
                    y=0;
                    y=a*a+b*b+c*c+d*d;
                    if (x==y)
                    {
                        printf("%ld = %d*%d + %d*%d + %d*%d + %d*%d",x,a,a,b,b,c,c,d,d);
                        goto A;
                    }
                    }
                }
            }
        }
        A:;
    }