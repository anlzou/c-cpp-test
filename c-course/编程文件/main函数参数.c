#include<stdio.h>
void main(int argc, char *argv[]) {
  while (--argc > 0)
    printf("%s", argv[argc]);
  printf("\n");
}