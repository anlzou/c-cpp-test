//假设两个字符串中没有相同的字符 
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10],str3[10];
	int i,j,k,l=0;
	int a,b;
		printf("输入str1：");
		//scanf("%s",&str1);
		gets(str1);
		printf("输入str2：");
		//scanf("%s",&str2);
		gets(str2); 
		a=strlen(str1);
		b=strlen(str2);
		for(i=0;i<a;i++)
		for(j=0;j<b;j++)
		if(str1[i]==str2[j])
		str3[l++]=str2[i];
		for(k=0;k<l;k++)
		printf("%c",str3[k]);
	return 0;
}
