//100分
#include<stdio.h>
int main()
{
    int n;
    int i;
    long int F[1000001];
    F[0]=0,F[1]=1,F[2]=1;
    scanf("%d",&n);
    for (i=2;i<=n;i++)
    {
        F[i]=F[i-1]+F[i-2];
        }
        printf("%d",F[i-1]%10007);
        return 0;
}