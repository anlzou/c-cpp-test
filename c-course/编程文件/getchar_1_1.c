#include<stdio.h>
void main() {
  char c;
  do {
    putchar(c = getchar());
  } while (c != '*');
}