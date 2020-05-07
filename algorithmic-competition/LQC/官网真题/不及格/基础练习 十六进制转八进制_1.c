#include<stdio.h>
int main()
{
    int n;
    int i;
    long int data[10];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    scanf("%x",&data[i]);
    for (i=0;i<n;i++)
    printf("%o\n",data[i]);
    return 0;
    }