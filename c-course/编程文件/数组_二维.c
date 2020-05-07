#include<stdio.h>
#define N 4
#define M 20
void main() {
  int i, j, k = 0;
  int data[N][M];
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++) {
      data[i][j] = k;
      k++;
    }
  }
  for (i = 0; i < N; i++) {
    for (j = 0; j < M; j++)
      printf("%5d", data[i][j]);
  }
}
