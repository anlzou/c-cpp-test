#include<stdio.h>
#define M 10
#define N 10
int data1[M][N];
int data2[N][M];
int a,b;
void main() {
  void fun(int data1[][]);
   int i, j;
   printf("输入N行：");
   scanf("%d",&a);
   printf("输入N列：");
   scanf("%d",&b);
  printf("输入%d行，%d列\n", a, b);
  for (i = 0; i < a; i++)
    for (j = 0; j < b; j++)
      scanf("%d", &data1[i][j]);
  fun(data1);
  printf("转换矩阵后\n");
  for (i = 0; i < b; i++) {
    for (j = 0; j < a; j++)
      printf("%d ", data2[i][j]);
    printf("\n");
  }
}
void fun(int data1[M][N]) {
  for (int i = 0; i < a; i++)
    for (int j = 0; j < b; j++)
      data2[j][i] = data1[i][j];
}