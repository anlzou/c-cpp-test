#include<stdio.h>
void fun1(int data[], int l) {
  int temp;
  for (int i = 0; i < l; i++)
    for (int j = i + 1; j < l; j++) // 升序
      if (data[j] < data[i]) {
        temp = data[j];
        data[j] = data[i];
        data[i] = temp;
      }
}