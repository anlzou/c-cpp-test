#include<stdio.h>
void main()
{
    int money,chicken_a,chicken_b,chicken_c3;//鸡翁，鸡母，鸡雏
    int chicken;
    int a=0,b=0,c=0;
    chicken_a=5;
    chicken_b=1;
    chicken_c3=1;
        for (a=0;a<=20;a++)
        {
            //money=0;
            //money=chicken_a*a;
            //chicken=a+b+c*3;
            //if ((money==100)&&(chicken==100)) goto A;
            for (int b=0;b<=100;b++)
            {
                //money=0;
                //money=chicken_a*a+chicken_b*b;
                //chicken=a+b+c*3;
                //if ((money==100)&&(chicken==100)) goto A;
                for (int c=1;c<=33;c++)
                {
                    money=0;
                    money=chicken_a*a+chicken_b*b+chicken_c3*c;
                    chicken=a+b+c*3;
                    if ((money==100)&&(chicken==100)) goto A;
                    }
                }
            }          
            A:
        printf("鸡翁：%d,鸡母：%d,鸡雏:%d",a,b,c/3);
    }