#include<stdio.h>
#include"p240_例10-8.h"
int main()
{
	struct student stu;
	FILE *fp;
	/*建立学生信息：*/
	printf("Enter student's name,address,age,score:");
	scanf("%s",stu.name);
	getchar();
	scanf("%s",stu.addr);
	getchar();
	scanf("%d,%d",&stu.age,&stu.score);
	if((fp=fopen("student.dat","rb+"))==NULL)
	{
		printf("Cannot open out file\n");
	}
	fwrite(&stu,sizeof(struct student),1,fp);
	rewind(fp);
	printf("	name	age		score 	address\n");
	while(fread(&stu,sizeof(struct student),1,fp))
	{
		printf("%10s	%5d		%5d		%10s\n",stu.name,stu.age,stu.score,stu.addr);
	}
	printf("\n");
	fclose(fp);
	return 0;
}
