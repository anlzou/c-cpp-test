#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp1,*fp2;
	char str[256];
	if((fp1=fopen("file1.txt","r"))==NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	}
	if((fp2=fopen("flie2.txt","w"))==NULL)
	{
		printf("Cannot open file\n");
		exit(0);
	} 
	if((strlen(fgets(str,256,fp1)))>0)
	{
		fputs(str,fp2);
		printf("%s",str);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}
