#include<stdio.h>
#define N 100
void main()
{
    int data[N];
    int a,b,temp;
    B:;
    a=0;
    printf("输入整数串：");
    do
    {
        scanf("%d",&data[a++]);
        }while (data[a-1]!=0);
        for (int i=1;i<=a;i++)
        if (data[i-1]<data[i]) goto A;
        goto B;
        A:;
        printf("输入要插入的数：");
        scanf("%d",&b);
        for (int j=0;j<a;j++)
    {
        if (data[j]==b) data[j+1]=b;
        if (data[j]<b&&data[j+1]>b) data[j+1]=b;
        for (int k=j+1;k<a;k++)
        if (data[j]>data[k])
        {        
        temp=data[k];
        data[k]=data[j];
        data[j]=temp;
        }
    }
    for (int l=0;l<a;l++)
    printf("%5d",data[l]);
    printf("\n");
}