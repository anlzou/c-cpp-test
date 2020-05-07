#include<stdio.h>
void main()
{
int  i,j,k,l;
printf("enter max line:");
scanf("%d",&j);
for (i=-j/2;i<=j/2;i++)
{ if (i<0) l=-i;
  else l=i;
 for (k=0;k<l;k++)
  printf(" ");
 if (i>0) l=-i;
  else l=i;
 for (k=0;k<(l+j/2)*2+1;k++)
  printf("*");
  printf("\n");
}
getch();
}