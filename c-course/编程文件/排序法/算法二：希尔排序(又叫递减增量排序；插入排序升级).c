#include<stdio.h>
#include<math.h>
void main() 
{
  void shellSort(int array[], int n, int t); // t为排序趟数
  int array[10], i;
  int n;
  printf("输入数组长度：");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
  shellSort(array, n, (log(n + 1) / log(2))); // 排序趟数应为log2(n+1)的整数部分,log的底数为e
  for (i = 0; i < n; i++)
    printf("%d ", array[i]);
  printf("\n");
}
// 按照当前增量进行插入排序
void shellInsert(int array[], int n, int dk) 
{
  int i, j, temp;
  for (i = dk; i < n; i++)      // 别离向每组的有序区域插入
  {
    temp = array[i];
    for (j = i - dk; (j >= i % dk) && array[j] > temp; j -= dk) // 比较与记录后移同时进行
      array[j + dk] = array[j];
    if (j != i - dk)
      array[j + dk] = temp;     // 插入
  }
}
// 计较Hibbard增量
int dkHibbard(int t, int k) 
{
  return (pow(2, t - k + 1) - 1);
}
// 希尔排序
void shellSort(int array[], int n, int t) 
{
  void shellInsert(int array[], int n, int dk);
  int i;
  for (i = 1; i <= t; i++)
    shellInsert(array, n, dkHibbard(t, i));
}