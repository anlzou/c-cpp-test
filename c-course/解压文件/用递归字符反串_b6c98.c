#include <stdio.h>
void convert(int i,int j,char a[])
{
char b;
b=a[i];
a[i]=a[j];
a[j]=b;
if(j-i>=3)
convert(i+1,j-1,a);

}
void main()
{
int k;
char c[100];
printf("\nplease input:");
gets(c);
k=strlen(c)-1;
convert(0,k,c);
printf("\n%s",c);
getch();
}
