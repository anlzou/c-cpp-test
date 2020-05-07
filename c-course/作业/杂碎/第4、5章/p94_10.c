#include<stdio.h>
#include<math.h>
void main(){
  int i, n, j, k, m;
  for (i = 4; i <=5000; i += 2) {
    for (n = 2; n < i; n++) {
      for (j = 2, k = 1; j <= (int)sqrt(n); j++) {
        if (n % j == 0)
          k = 0;
      }
      if (k)
        for (j = 2, m = 1; j <= (int)sqrt(i - n); j++) {
          if ((i - n) % j == 0)
            m = 0;
        }
      if (m) {
        printf("%4d =%3d + %4d\n", i, n, i - n);
        break;
      }
    }
    if (n == i) {
      printf("%d不是\n", i);
      break;
    }
  }
}