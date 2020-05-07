#include<stdio.h>
void main() {
  int year, month, day;
  int leap, dayth;
  int data;
  int tab[2][13] =
    { {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}, {0, 31, 29, 31, 30,
                                                            31, 30, 31, 31, 30,
                                                            31, 30, 31}
  };
  do {
    printf("In puts year month day：");
    scanf("%d %d %d", &year, &month, &day);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
      leap = 1;
    else
      leap = 0;
     data = tab[leap][month];
  } while ((year < 1) || ((month < 1) || (month > 12))
           || ((day < 1) || (day > data)));
  dayth = day;
  for (int i = 0; i < month; i++)
    dayth += tab[leap][i];
  printf("%d/%d/%d是%d的第%d天", year, month, day, year, dayth);
}