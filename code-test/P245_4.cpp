#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int count=0;
	char c;
	fp = fopen("file1.txt","r");
	if(fp == NULL)
	{
		printf("´ò¿ª´íÎó£¡\n");
		exit(0);
	}
	while(1)
	{
		c = fgetc(fp);
		if(c == EOF)
		break;
		printf("%c",c);
		++count;
	}
	printf("\n%d",count);
	fclose(fp);
	return 0;
}
