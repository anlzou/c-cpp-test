#include<stdio.h>
#define Pi  3.14
float t(float a, float b);

float t(float a, float b)
{
    float c;
    return  c = Pi * a*a *b;
    //return c;
 }

float main()
{
    float x, y, z;
    printf("输入圆柱体的半径和高：");
    scanf("%f%f", &x, &y);
    z = t(x, y);
    printf("圆柱体的体是：%f", z);
    return 0;
    }
    
