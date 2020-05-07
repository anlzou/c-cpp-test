#include<stdio.h>
void main()
{
    int year,month,day;
    int leap,dayth,i;
    int data[2][13]={
        {0,31,28,31,30,31,30,31,31,30,31,30,31},
        {0,31,29,31,30,31,30,31,31,30,31,30,31}
        };
    printf("输入 年,月,日:\n");
    scanf("%d%d%d",&year,&month,&day);
    if (year%400==0||(year%4==0&&year%100!=0))
    leap=1;
    else
    leap=0;
    dayth=day;
    for (i=1;i<month;i++)
    dayth+=data[leap][i];
    printf("是这年的第%d天",dayth);
    }