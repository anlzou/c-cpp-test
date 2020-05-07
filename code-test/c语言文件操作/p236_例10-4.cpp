#include"p236_Àý10-4.h"
int main()
{
	int i;
	struct student stua[SIZE];
	for(i=0;i<SIZE;i++)
	{
		printf("Enter student name,addr,age,score:\n");
		scanf("%d",stua[i].name);
		getchar();
		scanf("%s",stua[i].addr);
		getchar();
		scanf("%d,%d",&stua[i].age,&stua[i].score);
		getchar();
	}
	if(savedata(stua,SIZE))
	read_print();
	return 0;
} 
