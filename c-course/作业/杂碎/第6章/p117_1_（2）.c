#include<stdio.h>
void main()
{
    int i,j,temp;
    int a[6]={2,5,4,3,15,7};
    for (i=0,j=5;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
        for (i=0;i<6;i++)
        printf("%5d\n",a[i]);
    }