#include<stdio.h>
void main()
{
    int k=4,n=0;
    for (;n<k;)
    {
        n++;
        if (n%2==0)
        continue;
        k--;
        }
        printf("k=%d,n=%d\n",k,n);
    }