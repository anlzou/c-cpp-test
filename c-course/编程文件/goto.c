#include<stdio.h>
void main() {
  int i, a, b, temp;
  printf("请输入两个数字：");
  scanf("%d%d", &a, &b);
  if (a > b) {
    temp = b;
    a = b;
    b = temp;
  }
  for (i = a; i < b; i++) 
    if (i % 13 == 0 && i % 17 == 0)
      goto A;
    printf("找不到！\n");
    goto B;
  A:printf("%d\n", i);
  B:;
  

}