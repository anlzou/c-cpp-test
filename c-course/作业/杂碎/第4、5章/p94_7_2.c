#include<stdio.h>
#define N 200
void main()
{
    float data[N];//存放每个学生的成绩
    int a=0;//计算成绩在60~85的人数
    for (int i=0;i<N;i++)
    {
        printf("输入第%3d个学生的C语言成绩：",i+1);
        scanf("%f",&data[i]);
        if (60<=data[i]<=85) a++;
        //else if ()
        }
        printf("成绩在60~85的人有%d个",a);
    }