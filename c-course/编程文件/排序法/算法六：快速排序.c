#include<stdio.h>
void Qsort(int a[], int low, int high) {
  if (low >= high)
    return;
  int first = low;
  int last = high;
  int key = a[first];           /* 用字表的第一个记录作为枢轴 */
  while (first < last) {
    while (first < last && a[last] >= key) {
      --last;
    }
    a[first] = a[last];         /* 将比第一个小的移到低端 */
    while (first < last && a[first] <= key) {
      ++first;
    }
    a[last] = a[first];
    /* 将比第一个年夜的移到高端 */
  }
  a[first] = key;               /* 枢轴记录到位 */
  Qsort(a, low, first - 1);
  Qsort(a, first + 1, high);
}

void main() 
{
  int i, j;
  int array[10];
  int n;
  printf("输入数组长度：");
  scanf("%d", &n);   //需要输入的数组长度
  for (int l = 0; l < n; l++)
    scanf("%d", &array[l]);
    Qsort(array,0,n-1);
   for (int k = 0; k < n; k++)
    printf("%d ", array[k]);
}