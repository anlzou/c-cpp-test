//40分
#include<stdio.h>
int main()
{
    unsigned long n;
    unsigned long i;
    unsigned long a;
    unsigned long tab[1000000+2];
    int F_1=1,F_0=0;
    scanf("%d",&n);
    if (!(n>=1)&&!(n<=1000000)) return 1;
    tab[0]=F_1;
    tab[1]=F_0;
    for (i=2;i<=n+1;i++)
    {
        tab[i]=tab[i-1]+tab[i-2];
        }
       a=tab[n+1]%10007;
        printf("%d",a);
        return 0;
    }
    
    /*
    #include<stdio.h>
int main()
{
    long long n;
    long long i;
    long long a;
    long long tab[1000000+2];
    int F_1=1,F_0=0;
    scanf("%I64d",&n);
    if (!(n<1)&&!(n<1000000)) return 1;
    tab[0]=F_1;
    tab[1]=F_0;
    for (i=2;i<=n+1;i++)
    {
        tab[i]=tab[i-1]+tab[i-2];
        }
       a=tab[n+1]%10007;
        printf("%I64d",a);
        return 0;
    }
    */