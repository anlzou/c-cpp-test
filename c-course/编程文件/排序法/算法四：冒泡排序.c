#include <stdio.h>
#define N 10
void bubble_sort(int a[], int n) {
  int i, j, temp;
  for (j = 0; j < n - 1; j++)
    for (i = 0; i < n - 1 - j; i++) {
      if (a[i] > a[i + 1]) {
        temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
      }
    }
}
int main() {
  int number[N];
  int i;
  int l;
  printf("输入数组长度：");
  scanf("%d",&l);
  for (int x=0;x<l;x++)
  scanf("%d",&number[x]);
  bubble_sort(number, l);
  for (i = 0; i < l; i++)
    printf("%d ", number[i]);
  printf("\n");
}