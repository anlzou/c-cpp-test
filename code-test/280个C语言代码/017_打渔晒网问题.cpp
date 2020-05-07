#include<stdio.h>
typedef struct data
{
    int year;//年
    int month;//月
    int day;//日
} Data;
int LeapYear(int year)//判断这一年是不是闰年
{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 1;
    return 0;
};
int days[2][13]=
    {
        {0,31,29,31,30,31,30,31,31,30,31,30,31},//闰年每月天数
        {0,31,28,31,30,31,30,31,31,30,31,30,31}//平年每月天数
    };
int returnalldays(Data a)//计算某一年1月1日到这天的天数
{
    int k=1,i=0,sum=a.day;
    if(LeapYear(a.year))
        k=0;
    for( i=1; i<a.month; i++)		//i<a.month ???
    {
        sum+=days[k][i];
    }
    return sum;
};
int main()
{
    Data b,c;
    int cho=1,ans,i;
    do
    {
        ans=0;
        c.month=12;
        c.day=31;
        printf("请输入你要查询的年月日（如2005.8.6）\n");
        scanf("%d.%d.%d",&b.year,&b.month,&b.day);
        for( i=1990; i<b.year; i++) //计算1990年到输入年份的前一年的天数
        {
            c.year=i;
            ans+=returnalldays(c);
        }
        ans+=returnalldays(b);//加上今年月1日到今天的天数
        ans=ans%5;
        if(ans>0&&ans<4)
            printf("他在打鱼！\n");
        else
            printf("他在晒网！\n");
        printf("是否继续？1继续 0退出\n");
        scanf("%d",&cho);
    }
    while(cho);		//(cho==1) ???
    return 0;
}
