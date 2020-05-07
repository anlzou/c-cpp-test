#include<stdio.h>
void main() 
{
  char a[30], b[30];
  int i, j, k;
B:;
  printf("输入大于1个字符的字符串：");
  gets(a);
  k = strlen(a);
  while (k < 2)
    goto B;
   for (i = k, j = 0; i >= 0; i--, j++)
    b[j] = a[i - 1];
  for (i = 0; i < k; i++) 
  {
    if (a[i] != b[i]) 
    {
      printf("不是回文串");
      goto A;
    }
  }
  printf("是回文串");
A:;
}