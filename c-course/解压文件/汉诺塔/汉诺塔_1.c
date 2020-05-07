#include<stdio.h>
int N=0;
void move(char x, char y) {
    N++;
  printf("%c-->%c\n", x, y);
}

void hanoi(int n, char one, char two, char three) {
  /* 将n个盘从one座借助two座，移到three座 */
  if (n == 1)
    move(one, three);
  else {
    hanoi(n - 1, one, three, two);
    //printf("第一个\n");
    move(one, three);
    //printf("第二个\n");
    hanoi(n - 1, two, one, three);
  }
}

main() {
  int n;
  printf("input the number of diskes:");
  scanf("%d", &n);
  printf("The step to moving %3d diskes:\n", n);
  hanoi(n, 'A', 'B', 'C');
  printf("一共移了%d次",N);
}