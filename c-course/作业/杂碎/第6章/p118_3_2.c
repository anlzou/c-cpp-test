#include<stdio.h>
#define N 100
void main()
{
    int data[N];
    int a,b,temp;
    int k,y;
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
        for (int j=0;j<a;j++)
    {
        for (int k=j+1;k<a;k++)
        if (data[j]>data[k])
        {        
        temp=data[k];
        data[k]=data[j];
        data[j]=temp;
        }
    }
    printf("排序（升序）后：");
    for (int x=0;x<a;x++)
    printf("%5d",data[x]);
    printf("\n");
    printf("输入要插入的数：");
    scanf("%d",&b);
    for (int j=0;j<a;j++)
    {
        if ((data[j]==b)||((data[j]<b)&&(data[j+1]>b)))
        {
        y=data[j+1];
        data[j+1]=b;
        for (int k=a;k>j+2;k--)
        data[k]=data[k-1];
        data[k-1]=y;
        break;
        }
    }
    printf("插入排序（升序）后：");
    for (int l=0;l<=a;l++)
    printf("%5d",data[l]);
    printf("\n");
}