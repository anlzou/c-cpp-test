#include<stdio.h>
void main()
{
    int i,j,k,l,m,n,a,b=393;
    for (i=1;i<5;i++)
    for (j=1;j<10;j++)
    for (k=0;k<14;k++)
    {
        a=393-81*i-41*j-29*k;
        if (a>=0&&a<29)
        {
            if (a<b)
            {
                b=a;l=i;m=j;n=k;
                }
                break;
            }
        }
        printf("81cm:%d，41cm:%d，29cm:%d，剩余:%d\n",l,m,n,b);
    }