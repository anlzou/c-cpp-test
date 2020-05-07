#include<stdio.h>
struct data
{
	int m1;
	char m2;
	float m3;
	union uu
	{
		char u1[5];
		int u2[2];
	}ua;
}myaa;
int main()
{
	printf("%d %d %d %d",sizeof(struct data),sizeof(myaa.ua),sizeof(myaa.ua.u2),sizeof(myaa.m2));
	return 0;
} 
