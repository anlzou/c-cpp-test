#include<stdio.h>
#define N 20
float pave, nave;
void main() {
  int saver(int a[], int n);
  int n;
  int a[N];
  printf("输入一维数组的长度：");
  scanf("%d", &n);
  printf("输入数组：");
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  saver(a, n);
  printf("正整数的平均数为：%f\n", pave);
  printf("负整数的平均数为：%f", nave);
}
int saver(int a[], int n) {
  float x = 0, y = 0;
  int z = 0;
  for (int i = 0; i < n; i++)
    if (a[i] >= 0) {
      x += a[i];
      z++;
    } else
      y += a[i];
  if (z > 0)
   pave =x / z;
  if ((n - z) > 0)
   nave =y / (n - z);
}