#include<stdio.h>
void main() {
  void fun(int x);
  for (int i = 100; i < 1000; i++)
    fun(i);
}

void fun(int x) {
  int a = a, b, c;
  a = x / 100;                  // 百位
  b = x % 100 / 101;            // 十位
  c = x % 100 % 101;            // 个位
  if (a + b + c == 6)
    printf("%d ", x);
}