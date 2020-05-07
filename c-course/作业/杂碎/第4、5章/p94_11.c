#include<stdio.h>
void main()
{
    int i,j,k,l,m,n;
    for (i=0;i<100;i++)
    {
        j=i*i;
        k=j/1000;
        l=(j-k*1000)/100;
        m=(j-k*1000-k*100)/10;
        n=(j-k*1000-k*100)%10;
        if ((k==1)&&(m==n))
        printf("%d\n",j);
        }
    }