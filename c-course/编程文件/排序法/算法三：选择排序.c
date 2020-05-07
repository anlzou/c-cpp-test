#include<stdio.h>
void select_sort(int *a, int n) 
{
  register int i, j, min, temp;
  for (i = 0; i < n - 1; i++) 
  {
    min = i;                    // 查找最小值
    for (j = i + 1; j < n; j++)
      if (a[min] > a[j])
        min = j;                // 互换
    if (min != i) 
    {
      temp = a[min];
      a[min] = a[i];
      a[i] = temp;
    }
  }
}
void main() 
{
  int n;
  int a[10];
  scanf("%d", &n);   //需要输入的数组长度
  for (int l = 0; l < n; l++)
    scanf("%d", &a[l]);
  select_sort(a, n);
  for (int k = 0; k < n; k++)
    printf("%d ", a[k]);
}