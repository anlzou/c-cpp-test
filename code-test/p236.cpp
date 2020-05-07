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
		printf("����ѧ�������֣���ַ�����䣬�ɼ���");
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
//���ܣ�����student.dat �ļ�����m��stua ��Ԫ��д����ļ��� 
int savedata(struct student stua[],int m)
{
	FILE *fp;
	if((fp = fopen("student.dat","wb")) == NULL) //wb ��һ���������ļ���ֻ����д���� 
	{
		printf("���ļ�����\n");
		return 0;
	}
	for(int i = 0;i < m;i++)
	fwrite(&stua[i],sizeof(struct student),1,fp);//��stua[i] д������ļ�
	fclose(fp);
	return 1; 
}
//���ļ��е����ݶ���������ʾ 
void read_print()
{
	struct student stu;
	FILE *fp;
	if((fp = fopen("student.dat","rb")) == NULL)
	{
		printf("�򿪴���\n");
		return ;//Ĭ��return; 
	}
	printf("\n");
	printf("name    age    score    addr\n");
	while(fread(&stu,sizeof(struct student),1,fp))//��ȡһ��struct student ���� 
		printf("%s   %5d   %4d   %11s\n",stu.name,stu.age,stu.score,stu.addr);
	printf("\n");
	fclose(fp);
} 
