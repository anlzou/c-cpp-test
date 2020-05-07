#include<stdio.h>
void main() {
int a, i, b, n;
  printf("300以内的亲密数为:\n");
  for (n = 1; n < 3000; n++) /* 穷举3000以内的全部整数 */
    {
    for (a = 0, i = 1; i <= n / 2; i++) /* 计算数a的各因子，各因子之和存放于b */
      if (!(n % i))
        a += i;                 /* 计算b的各因子，各因子之和存于n */
    for (b = 0, i = 1; i <= n / 2; i++)
      if (!(n % i))
        b += i;
    if (a == b && a < b)
        printf("%4d %4d ", a, b); /* 若n=a，则a和b是一对亲密数，输出 */
    }
}