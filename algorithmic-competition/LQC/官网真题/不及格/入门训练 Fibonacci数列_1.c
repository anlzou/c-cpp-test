//40分
#include<stdio.h>
int main()
{
    long long n;
    long long i;
    long long tab[1000000];
    int F1=1,F2=1;
    tab[0]=F1;
    tab[1]=F2;
    scanf("%d",&n);
    if (n<1||n>1000000) return 1;
    for (i=2;i<n;i++)
    {
        tab[i]=tab[i-1]+tab[i-2];
        }
        printf("%d",tab[n-1]%10007);
        return 0;
    }