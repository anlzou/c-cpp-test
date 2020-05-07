#include<stdio.h>
int main()
{
    int data[10] = {1,2,4,6,8,16,32,64,128};
    int tab[6];
    int a;
    int sum;
    int j=0;
    int l;
    printf("输入一个整数：");
    scanf("%d",&a);
    l=9;
    A:
    for(int i=l;i>0;i--)
    {
        l=i;
        if (data[i]<a)
        {
            tab[j++]=data[i];
            sum+=data[i];
            if (sum==a) break;
            else if (sum>a)
            {
                l--;
                j=0;
                goto A;
                }
            }
            if ()
        }
        for (int i=j;j>0;j--)
        printf("%d ",tab[j]);
        return 0;
    }
