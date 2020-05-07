#include<stdio.h>
int main()
{
	char c;
	c=getchar();
	if(c<'A'||c>'Z')
		return 1;
	printf("%c",c+32);
	return 0;
}
