#include<stdio.h>
#define N 100
void main()
{
    int data[N];
    int temp;//第1个数据；交换数据
    int a=0;//全局变量
     printf("输入个整数（100个以内，输入0停止输入）：\n");
    printf("输入整数串：");
    do
    {
        scanf("%d",&data[a++]);
        }while (data[a-1]!=0);
    printf("你输入了%d个有效整数\n",a);
    printf("进行排序（升序）后：\n");
    for (int j=0;j<=a;j++)
    {
        for (int k=j+1;k<=a;k++)
        if (data[j]>data[k])
        {        
        temp=data[k];
        data[k]=data[j];
        data[j]=temp;
        }
        }
        for (int l=0;l<a;l++)
        printf("%4d",data[l]);
        printf("\n");
    }