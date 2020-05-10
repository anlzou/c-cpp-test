//未完成，假设两个字符串中有相同的字符 
#include<stdio.h>
#include<string.h>
int main()
{
	char str1[10],str2[10],str3[10];
	int i,j,k,l=0;
	int a,b;
		printf("输入str1：");
		scanf("%s",&str1);
		printf("输入str2：");
		scanf("%s",&str2);
		a=strlen(str1);
		b=strlen(str2);
		for(i=0;i<a;i++) //str1
		{
			for(j=0;j<b;j++) //str2
			{
			if(str1[i]==str2[j])
				for(k=0;k<l;k++)
				{
				if(str1[i]==str3[k])
				break;
				}
			str3[l++]=str1[i];
			break;
	    	}
	    }
		printf("%s",str3);
	return 0;
}
