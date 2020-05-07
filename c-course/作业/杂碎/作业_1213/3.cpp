#include<stdio.h>
void fun2(int data[], int l) {
  int k = 0;
  int i,j=0;
  int data2[l];
  for (i = j; i < l; i++) {
      for (j=i+1;j<l;j++)
    if (data[i] == data[j])
      j += 1;
      data2[k++] = data[i];
  }
  return k;
}