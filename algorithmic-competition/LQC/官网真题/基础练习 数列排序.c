//100分
#include<stdio.h>
int main() {
  int n;
  int temp;
  int tab[200];
  int i,j;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &tab[i]);
  for (i = 0; i < n; i++)
    for (j = i + 1; j < n; j++)
      if (tab[i] > tab[j]) {
        temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
      }
  for (i = 0; i < n; i++)
    printf("%d ", tab[i]);
  return 0;
}