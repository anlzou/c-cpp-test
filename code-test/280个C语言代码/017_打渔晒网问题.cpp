#include<stdio.h>
typedef struct data
{
    int year;//��
    int month;//��
    int day;//��
} Data;
int LeapYear(int year)//�ж���һ���ǲ�������
{
    if((year%4==0&&year%100!=0)||year%400==0)
        return 1;
    return 0;
};
int days[2][13]=
    {
        {0,31,29,31,30,31,30,31,31,30,31,30,31},//����ÿ������
        {0,31,28,31,30,31,30,31,31,30,31,30,31}//ƽ��ÿ������
    };
int returnalldays(Data a)//����ĳһ��1��1�յ����������
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
        printf("��������Ҫ��ѯ�������գ���2005.8.6��\n");
        scanf("%d.%d.%d",&b.year,&b.month,&b.day);
        for( i=1990; i<b.year; i++) //����1990�굽������ݵ�ǰһ�������
        {
            c.year=i;
            ans+=returnalldays(c);
        }
        ans+=returnalldays(b);//���Ͻ�����1�յ����������
        ans=ans%5;
        if(ans>0&&ans<4)
            printf("���ڴ��㣡\n");
        else
            printf("����ɹ����\n");
        printf("�Ƿ������1���� 0�˳�\n");
        scanf("%d",&cho);
    }
    while(cho);		//(cho==1) ???
    return 0;
}
