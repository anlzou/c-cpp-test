#include<stdio.h>
int main()
{
	int a = 12, b = 10, c, d, e, f, g, h;
	c = a & b;
	d = a | b;
	e = a ^ b;
	f = a << 2;
	g = a >> 2;
	h = ~b;
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	printf("%d\n",f);
	printf("%d\n",g);
	printf("%d\n",h); 
	return 0;
}
