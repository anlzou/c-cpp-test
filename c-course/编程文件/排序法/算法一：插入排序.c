#include<stdio.h>
void main() 
{
  int i, j;
  int array[10];
  int n;
  int temp;
  scanf("%d", &n);   //需要输入的数组长度
  for (int l = 0; l < n; l++)
    scanf("%d", &array[l]);
  for (i = 1; i < n; i++) 
  {
    temp = array[i];
    for (j = i; j > 0 && array[j - 1] > temp; j--)
      array[j] = array[j - 1];
    array[j] = temp;
  }
   for (int k = 0; k < n; k++)
    printf("%d ", array[k]);
}