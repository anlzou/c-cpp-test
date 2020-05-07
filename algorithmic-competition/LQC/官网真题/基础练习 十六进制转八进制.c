//100分_抄的
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* 将十六进制字符转换为数值 */
int get_value(const char c) {
  if (c >= '0' && c <= '9')
    return c - '0';
  else
    return c - 'A' + 10;
}
int main() {
  char *input, *output, *output2, *ptr;
  int n, i, j, tmp, len;

  scanf("%d\n", &n);
  input = (char *)malloc(100000 + 1); /* 储存输入的十六进制数 */
  output = (char *)malloc(100000 * 4 + 4); /* 储存过度用的二进制数 */
  output2 = (char *)malloc(100000 * 3 + 3); /* 储存最终结果八进制数 */
  while (n--) {
    gets(input);
      //while (n--) {
    len = strlen(input);
    ptr = input;
    j = 0;
    /* 首先将十六进制转换为二进制，1位十六进制数对应4位二进制数 
     */
    while (*ptr) {
      tmp = get_value(*ptr);
      output[j++] = ((tmp >> 3) & 0x1); /* bit3 */
      output[j++] = ((tmp >> 2) & 0x1); /* bit2 */
      output[j++] = ((tmp >> 1) & 0x1); /* bit1 */
      output[j++] = ((tmp >> 0) & 0x1); /* bit0 */
      ptr++;
    }
    /* 将二进制转换为八进制，3位二进制数对应1位八进制数，从低位开始转 
     */
    /* j为二进制数组下标，每个循环减3 */
    /* i为八进制数组下标，每个循环减1 */
    j = len * 4 - 1;
    i = (len * 4 + 2) / 3 - 1;
    output2[i + 1] = '\0';
    for (; j >= 0;) {
      if (j >= 2)
        output2[i--] =
          (output[j - 2] << 2 | output[j - 1] << 1 | output[j]) + '0';
      else if (j == 1)
        output2[i--] = (output[j - 1] << 1 | output[j]) + '0';
      else if (j == 0)
        output2[i--] = output[j] + '0';
      j -= 3;
    }
    /* 八进制数组的有效下标从 i+1 开始 */
    j = i + 1;
    /* 去除前导的'0'字符(可能会影响判定结果) */
    while (output2[j] == '0')
      j++;
    /* 如果整个字符串都是'0'，则直接输出结果'0'，否则从首位非'0'开始输出 
     */
    if (output2[j] == '\0')
      printf("0\n");
    else
      printf("%s\n", &output2[j]);
  }

  free(input);
  free(output);
  free(output2);

    return 0;
}