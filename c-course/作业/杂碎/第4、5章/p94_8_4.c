#include<stdio.h>
void main()
{
    int i,j,k;
    int data[2][9]={{5,8,10,5,10,8,8,5,10},{8,10,5,10,5,8,10,8,5}}
  for (int i1=0;i1<2;i1++)
  {
       for (int i2=0;i2<9;i2+3)
    {
        i=data[i1][i2];
        j=data[i1][i2+1];
        k=data[i1][i2+2];
        }
 }
    }