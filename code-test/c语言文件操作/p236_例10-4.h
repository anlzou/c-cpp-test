//数据块的读写
/*
	fread(ptr,size,nitems,fp);
	fwrite(ptr,size,size,nitems,fp);
*/
#include<stdio.h>
#define SIZE 2
struct student
{
	char name[10];
	int age;
	int score;
	char addr[30];
};

/*savadata()的功能是，建立studnet.dat文件，将m个stua元素的数据写入该文件中*/ 
int savedata(struct student stua[],int m)
{
	int i;
	FILE *fp;
	if((fp=fopen("student.dat","wb"))==NULL)
	{
		printf("Cannot open out file!\n");
		return 0;
	}	
	for(i=0;i<m;i++)
		fwrite(&stua[i],sizeof(struct student),1,fp);	//将stua[i]写入磁盘文件 
	fclose(fp);
	return 1;
}

/*read_prnit()函数的功能是，将文件student.dat的内容读出并显示*/ 
void read_print()
{
	struct student stu;
	FILE *fp;
	if((fp=fopen("studen.dat","rb"))==NULL)
	{
		printf("Cnannot open out file\n");
		return;
	}	
	printf("\n");
	printf("name	age		score	add\n");
	while(fread(&stu,sizeof(struct student),1,fp))	//读取一个struct student数据
	{
		printf("%s	5%	5%	10s\n",stu.name,stu.age,stu.score,stu.addr);
	} 
	printf("\n");
	fclose(fp);
	return;
}
