#include<stdio.h>
#include<stdlib.h>
#define SIZE  2
struct student
{
	char name[10];
	int age;
	int score;
	char addr[30];
};
int savedata(struct student stua[],int m);
void read_print();
void read_write();
int main()
{
    student stua[SIZE];
	for(int i = 0;i < SIZE;i++)
	{
		printf("输入学生的名字，地址，年龄，成绩：");
		scanf("%s",stua[i].name);
		getchar();
		scanf("%s",stua[i].addr);
		getchar();
		scanf("%d%d",&stua[i].age,&stua[i].score);
		getchar();
	}
	if(savedata(stua,SIZE))
	read_print(); 
	return 0;
}
//功能：建立student.dat 文件，将m个stua 的元素写入该文件中 
int savedata(struct student stua[],int m)
{
	FILE *fp;
	if((fp = fopen("student.dat","wb")) == NULL) //wb 打开一个二进制文件，只允许写数据 
	{
		printf("打开文件错误！\n");
		return 0;
	}
	for(int i = 0;i < m;i++)
	fwrite(&stua[i],sizeof(struct student),1,fp);//将stua[i] 写入磁盘文件
	fclose(fp);
	return 1; 
}
//将文件中的内容读出来并显示 
void read_print()
{
	struct student stu;
	FILE *fp;
	if((fp = fopen("student.dat","rb")) == NULL)
	{
		printf("打开错误！\n");
		return ;//默认return; 
	}
	printf("\n");
	printf("name    age    score    addr\n");
	while(fread(&stu,sizeof(struct student),1,fp))//读取一个struct student 数据 
		printf("%s   %5d   %4d   %11s\n",stu.name,stu.age,stu.score,stu.addr);
	printf("\n");
	fclose(fp);
} 
