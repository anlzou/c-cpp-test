//δ��� 

#include<stdio.h>
#include<string.h>
int main()
{
	char c[40];
	char temp;
	int l;
	int i=0,j;
	gets(c); //���鲻�ᱣ��\0 
	l=strlen(c);
	while(i++<=l) //�ҳ������ַ� 
	{
		if(c[0]<c[i])
		{
			temp=c[0];
			c[0]=c[i];
			for(j=i;j>1;j--)
				c[j]=c[j-1];
			c[1]=temp;
		}
	}
//	printf("%d\n",l);
//	puts(c);
//	for(int i=0;i<l;i++)
//		for(int j=i;j<l;j++)
//			if(c[j]>c[i])
//			{
//				temp=c[i];
//				c[i]=c[j];
//				c[j]=temp;
//			}
	puts(c);
	return 0;
}
