#include <stdio.h>
int main()
{ 
    char a[13]="How are you?";
    //printf("%s",a);
	char b[13];
	for(int i=0;i<13;i++)
    	scanf("%c",&b[i]);
    printf("%s",b);
    //printf("a:%s\nb:%s",a,b);
    return 0;
}
