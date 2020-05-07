#include <stdlib.h>
#include <stdio.h>
void Merge(int sourceArr[], int tempArr[], int startIndex, int midIndex,
           int endIndex) {
  int i = startIndex, j = midIndex + 1, k = startIndex;
  while (i != midIndex + 1 && j != endIndex + 1) {
    if (sourceArr[i] >= sourceArr[j])
      tempArr[k++] = sourceArr[j++];
    else
      tempArr[k++] = sourceArr[i++];
  }
  while (i != midIndex + 1)
    tempArr[k++] = sourceArr[i++];
  while (j != endIndex + 1)
    tempArr[k++] = sourceArr[j++];
  for (i = startIndex; i <= endIndex; i++)
    sourceArr[i] = tempArr[i];
}
// 内部利用递归
void MergeSort(int sourceArr[], int tempArr[], int startIndex, int endIndex) {
  int midIndex;
  if (startIndex < endIndex) {
    midIndex = (startIndex + endIndex) / 2;
    MergeSort(sourceArr, tempArr, startIndex, midIndex);
    MergeSort(sourceArr, tempArr, midIndex + 1, endIndex);
    Merge(sourceArr, tempArr, startIndex, midIndex, endIndex);
  }
}
int main(int argc, char *argv[]) {
  int l;
  int a[10];
  printf("输入数组长度：");
  scanf("%d",&l);
  for (int x=0;x<l;x++)
  scanf("%d",&a[x]);
  int i, b[l];
  MergeSort(a, b, 0, l-1);
  for (i = 0; i < l; i++)
    printf("%d ", a[i]);
  printf("\n");
  return 0;
}