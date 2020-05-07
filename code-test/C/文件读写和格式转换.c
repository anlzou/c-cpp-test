#include  <stdio.h>
#include  <stdlib.h>
void fun(char  *s, int  a, double  f)
{
/**********found**********/
	FILE *fp;
  char  str[100], str1[100], str2[100];
  int  a1;     
  double  f1;
  fp = fopen("file1.txt", "w");
  fprintf(fp, "%s  %d  %f\n", s, a, f);		//文件写入；数据保存到文件文件中；在当前路径下 
/**********found**********/
  fclose(fp) ;
  fp = fopen("file1.txt", "r");
/**********found**********/
  fscanf(fp,"%s%s%s", str, str1, str2);		//文件读出 
  fclose(fp);
  a1 = atoi(str1);							//atoi把字符串转换成整型数字 
  f1 = atof(str2);							//atof把字符串转换成浮点型数字 
  printf("\nThe result :\n\n%s %d %f\n", str, a1, f1);
}
main()
{ char  a[10]="Hello!";    int  b=12345;
  double  c= 98.76;
  fun(a,b,c);
}

