#include<stdio.h>
int main() {
  char a[29][29];
  int i, j;
  int x, y;


  for (i = 0; i < 29; i++) {
    for (j = 0; j < 29; j++) {
      x = i - 14;
       y = 14 - j;

      if (x * x + y * y <= 196) {
        a[i][j] = '0';
      } else {
        a[i][j] = ' ';
      }
    }
  }



  for (i = 0; i < 29; i++) {
    for (j = 0; j < 29; j++) {
      printf("%c ", a[i][j]);
    }
    printf("\n");
  }
}