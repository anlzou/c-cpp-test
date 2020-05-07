#include<stdio.h>
int main()
{
	char ch;
	int x,y,z=0;
	scanf("%c%d%d",&ch,&x,&y);
	switch(ch)
	{
		case'+':
			z=x+y;
			break;
		case'-':
			z=x-y;
			break;
		case'*':
			z=x*y;
			break;
		case'/':
			z=x/y;
			break;
		default:
			return 1;
	}
	printf("%d",z);
	return 0;
}
