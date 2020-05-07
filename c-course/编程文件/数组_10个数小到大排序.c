#include<stdio.h>
#define N 10
void main()
{
    int i,j,temp,min_a,data[N];
    printf("请输入%d个整数:\n",N);
    for (i=0;i<N;i++)
    scanf("%d",&data[i]);
    printf("输入数字后:\n");
    for (i=0;i<N;i++)
    printf("%5d",data[i]);
    printf("\n");
    for (i=0;i<N;i++)
    {
        min_a=i;
        for (j=i+1;j<N;j++)
            if (data[j]<data[min_a])
            min_a=j;
        temp=data[min_a];
        data[min_a]=data[i];
        data[i]=temp;
       }
       printf("从小到大排序后:\n");
       for (i=0;i<N;i++)
       printf("%5d",data[i]);
 }