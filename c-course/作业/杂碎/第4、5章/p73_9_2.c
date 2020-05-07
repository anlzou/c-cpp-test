#include<stdio.h>
void main()
{
    float gain,bonus;//利润，奖金
    int a;
    printf("输入利润：");
    scanf("%f",&gain);
    if (a%10!=0)
    {
    a=(int)gain/10;
    a+=1;
    }
    else a=(int)gain/10;
    switch (a)
    {
        case 0:
        case 1:bonus=gain*0.1; break;
        case 2:bonus=10*0.1+(gain-10)*0.075;break;
        case 3:
        case 4:bonus=(gain-20)*0.05;break;
        case 5:
        case 6:bonus=(gain-40)*0.03;break;
        case 7:
        case 8:
        case 9:
        case 10:bonus=(gain-60)*0.015;break;
        default :bonus=(gain-100)*0.01;break;
        }
        printf("奖金数额为：%f万",gain+bonus);
   }