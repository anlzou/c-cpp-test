#include<stdio.h>
#include<math.h>
void main()
{
    //float fun(float a,float b,float c);
    float a,b,c,x,y,e,root1,root2;
    
    printf("请输入一元二次方程的系数（a，b，c）:");
    scanf("%f,%f,%f",a,b,c);
    e=b*b-4*a*c;
        if (a!=0)
   {
        switch (e)
        {
        case e>0:
        root1=-b+sqrt(e)/(2a);
        root2=-b-sqrt(e)/(2a);
        printf("有两个不同实数根\n");
        printf("第一个解为：%f\n",root1);
        printf("第二个解为：%f",root2);
        break;
        case e==0:
        root1=-b/(2a);
        printf("只有一个实数根：%f",root1);
        break;
        case e<0:
        root1=-b/(2a)+sqrt(e)/(2a);
        root2=-b(2a)-sqrt(e)/(2a);
        printf("有两个不同复根\n");
        printf("第一个解为：%f\n",root1);
        printf("第二个解为：%f",root2);
        break;
        }
    }
    
    else if (a==0&&b!=0)
    {
        //b*x+c=0;
        root1=-c/b;
        printf("方程有一个根：%f",root1);
        }
    else (a==0&&b==0)
        {
        switch (c)
        {
        case c==0:
        printf("方程为同义反复");
        break;
        case c!=0:
        printf("方程矛盾");
        }
        }
    default:printf("错误");
    }
    
float fun(float a,float b,float c)
{
    
    y=a*x*x+b*x+c;
    }