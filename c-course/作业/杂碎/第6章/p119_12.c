#include<stdio.h>
#define N 100
void main()
{
    char str1[N],str2[N];
    int a,b;
    printf("输入第1个字符串：\n");
    gets(str1);
    printf("输入第2个字符串：\n");
    gets(str2);
    a=strlen(str1);
    b=strlen(str2);
    for (int i=a,j=0;j<=b;j++,i++)
    str1[i]=str2[j];
    printf("两个字符串合并后：\n");
    puts(str1);
    }