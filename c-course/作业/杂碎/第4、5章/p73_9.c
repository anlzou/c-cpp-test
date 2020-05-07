#include<stdio.h>
void main()
{
    float gain,b;
    printf("输入利润：");
    scanf("%f",&gain);
    if (gain<=10) b=0.1*gain;
    else if (10.0<gain<=20.0) b=(gain-10)*0.075+0.1*gain;
    else if (20.0<gain<=40.0) b=(gain-20)*0.05;
    else if (40.0<gain<=60.0) b=(gain-40)*0.03;
    else if (60.0<gain<100.0) b=(gain-60)*0.015;
    else if (gain>=100.0) b=(gain-100)*0.01;
    //b=(gain-100)*0.01;
    printf("%f ",gain);
    printf("%f\n",b);
    printf("奖金数额为:%f万",b+gain);
    }