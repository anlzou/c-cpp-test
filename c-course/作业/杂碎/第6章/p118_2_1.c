#include<stdio.h>
#define N 100
void main()
{
    int data[N];
    int a,temp;//第1个数据；交换数据
    int i=0;//全局变量
    printf("输入个整数（100个以内）：\n");
    scanf("%d",&a);
    while (i<N&&a>=0&&a<=100)
    {
    data[i]=a;
    scanf("%d",&a);
    i++;
    }
    printf("你输入了%d个有效整数\n",i);
    printf("进行排序（升序）后：\n");
    for (int j=0;j<i;j++)
    {
        for (int k=j+1;k<i;k++)
        if (data[j]>data[k])
        {        
        temp=data[k];
        data[k]=data[j];
        data[j]=temp;
        }
        }
        for (int l=0;l<i;l++)
        printf("%4d",data[l]);
    }