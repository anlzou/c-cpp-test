#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	int flen;
	char *p;
	if((fp=fopen("myfile.txt","r"))==NULL)
	{
		printf("file open error\n");
		exit(0);
	}
	fseek(fp,0L,SEEK_END);
	flen=ftell(fp);
	p=(char *)malloc(flen+1);
	if(p==NULL)
	{
		fclose(fp);
		return 0;
	}
	fseek(fp,0L,SEEK_SET);
	fread(p,flen,1,fp);
	p[flen]=0;
	printf("%s\n",p);
	fclose(fp);
	free(p);
	return 0;
} 
