#include<stdio.h>
#include"h.h>"
#define N 20
void main() {
  int data[N];
  int l;
  int k;
  printf("输入数组的长度：");
  scanf("%d", &l);
  for (int i = 0; i < l; i++)
    scanf("%d", &data[i]);
  printf1(data, l);
  fun1(data, l);
  printf1(data, l);
  k=fun2(data, l);
  printf1(data2, k);
}