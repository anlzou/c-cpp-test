#include<stdio.h>
#define N 3
void main()
{
    int i,*p,a[N];
    p=a;
    for (i=0;i<N;i++)
        scanf("%d",(p+i));
        printf("\n");
        for (i=0;i<N;i++)
        printf("%d ",*(p+i));
        printf("\n\n");
        for (i=N-1;i>=0;i--)
        printf("%d ",*(p+i));
    }