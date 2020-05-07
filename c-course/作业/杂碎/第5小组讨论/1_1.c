#include<stdio.h>
#include<string.h>
void main() 
{
  char a[30];
  int i, j, k;
B:;
  printf("输入大于2个字符的字符串：");
  gets(a);
  k = strlen(a);
  if (k < 3)
    goto B;
  for (i = 0, j = k; i <= j; i++, j--)
    if (a[i] != a[j - 1]) 
    {
      printf("不是回文串\n");
      goto A;
    }
  printf("是回文串");
A:;
}