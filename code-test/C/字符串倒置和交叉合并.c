/*
	Name: 
	Copyright: 
	Author: anlzou
	Date: 01/10/18 20:23
	Description: 
*/

#include <stdio.h>
#include <string.h>
void fun( char  *a, char  *b, char  *c )
{
    int   i , j;
    char   ch;
    i = 0;
    j = strlen(b)-1;
    /************found************/		//Ê×Î²×Ö·û½»»»£¬ÓÃÈÝÆ÷ch 
    while ( i < j )
    {
        ch = b[i];
        b[i] = b[j];
        b[j] = ch;
        i++;
        j--;
    }
    while ( *a || *b )
    {
        /************found************/
        if ( *a )
        {
            *c = *a;
            c++;
            a++;
        }
        if ( *b )
        {
            *c = *b;
            c++;
            b++;
        }
    }
    *c = 0;
}
int main()
{
    char   s1[100],s2[100],t[200];
    printf("\nEnter s1 string : ");
    scanf("%s",s1);
    printf("\nEnter s2 string : ");
    scanf("%s",s2);
    fun( s1, s2, t );
    printf("\nThe result is : %s\n", t );
    return 0;
}

