//100分
#include<stdio.h>
#include<math.h>
int main()
{
    double PI=atan(1.0)*4;
    int r;
    double S;
    scanf("%d",&r);
    S=PI*r*r;
    printf("%.7f",S);
    return 0;
}