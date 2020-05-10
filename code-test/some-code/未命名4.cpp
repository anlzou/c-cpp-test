//回文数
#include<stdio.h>
#include<string.h>
int main()
{
	char p[20];
	int lenth,temp,i;
	gets(p);
	lenth=strlen(p);
	if(lenth%2==0)
		temp=lenth/2;
	else
		temp=lenth/2+1;
	i=0;
	while(temp>=0)
	{
		if(p[i]!=p[lenth-1-i])
		{
			printf("不是。\n");
			break;
		}
		i++;
		temp--;
		if(temp==0)         //对比完后 
			printf("是。");
	}
	return 0;
}
