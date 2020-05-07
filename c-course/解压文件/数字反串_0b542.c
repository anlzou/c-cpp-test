#include <stdio.h>
#include <conio.h>
void main()
{ unsigned long int a;
 int b[100],i=0,j=0;
printf("请输入两位数字:");
scanf("%ld",&a);

while(a!=0)
{b[i]=a%10;
 a=a/10;
 i++;
}

while(j!=i)
{printf("%d",b[j]);
j++;
getch();}

}