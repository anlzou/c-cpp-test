#include<stdio.h>
void main()
{
    int a;
    int x;
    printf("输入数字（1-10）:");
    scanf("%d",&a);
    switch (a)
    {
        case 1:
        case 2:
        case 7:
        case 8:x=1;break;
        case 9:
        case 10:x=3;break;
        case 3:
        case 4:
        case 5:
        case 6:x=10;break;
        default :x=0;break;        
        }
        printf("%d",x);
    }