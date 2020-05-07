#include<stdio.h>
void main()
{
    int money,chicken;
    int chicken_a=5,chicken_b=1,chicken_3c=1;//鸡翁、鸡母、3只鸡雏的价格
    int a,b,c;
    for (a=0;a<=100;a++)
    {
        for (b=0;b<=100;b++)
        {
            for (c=1;c<=100;c++)
            {
                money=0;
                money=chicken_a*a+chicken_b*b+chicken_3c*c;
                chicken=a+b+c*3;
                if ((money==100)&&(chicken==100)) goto A;
               }
            }
        }
        A:
        printf("鸡翁：%d\n鸡母：%d\n鸡雏：%d\n",a,b,c*3);
    }