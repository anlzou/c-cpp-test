#include <stdio.h>
#include<string.h>
char inbuf[BUFSIZ];
int main(void)
{
	char a[100];
	setbuf(stdin,inbuf);
	printf("Input a string:");
	scanf("%s",a);
	puts(inbuf);
	if(0==_flushall())
	puts(inbuf);
	return 0;
}
