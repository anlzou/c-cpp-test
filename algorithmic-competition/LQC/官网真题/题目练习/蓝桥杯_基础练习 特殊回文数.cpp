#include<iostream>
#include<cstdio>
using namespace std;
int main() {
  int n;
  int i, j, k, l, r;
  cin >> n;
  for (i = 1; i <= 9; i++) {
    for (j = 0; j <= 9; j++) {
      l = n - (i * 2 + j * 2);
      if (l >= 0 && l <= 9) {
        printf("%d%d%d%d%d\n", i, j, l, j, i);
      }
    }
  }
  for (i = 1; i <= 9; i++) {
    for (j = 0; j <= 9; j++) {
      l = n - (i * 2 + j * 2);
      // ¿ÉÒÔÕû³ý
      r = l % 2;
      if (r == 0 && l / 2 >= 0 && l / 2 <= 9) {
        printf("%d%d%d%d%d%d\n", i, j, l / 2, l / 2, j, i);
      }
    }
  }
  return 0;
}
