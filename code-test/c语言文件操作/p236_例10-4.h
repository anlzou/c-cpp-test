//���ݿ�Ķ�д
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

/*savadata()�Ĺ����ǣ�����studnet.dat�ļ�����m��stuaԪ�ص�����д����ļ���*/ 
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
		fwrite(&stua[i],sizeof(struct student),1,fp);	//��stua[i]д������ļ� 
	fclose(fp);
	return 1;
}

/*read_prnit()�����Ĺ����ǣ����ļ�student.dat�����ݶ�������ʾ*/ 
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
	while(fread(&stu,sizeof(struct student),1,fp))	//��ȡһ��struct student����
	{
		printf("%s	5%	5%	10s\n",stu.name,stu.age,stu.score,stu.addr);
	} 
	printf("\n");
	fclose(fp);
	return;
}
