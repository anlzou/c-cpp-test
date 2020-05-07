#include<stdio.h>
void main() 
{
  int a[2], i, j;
  for (i = 0; i < 2; i++)
    a[i] = 1;
  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
      a[i] += a[j];
  for (i = 0; i < 2; i++)
    printf("%d\n", a[i]);
}
