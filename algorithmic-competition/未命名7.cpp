#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,const char *argv[]){
char num[30];//���Ա���30λ���������ַ��ͱ��� 
while(gets(num)!=NULL){
int len=(int)strlen(num);
int sum=0;
int tmp;
//printf("%d",len);
for(int i=len-1;i>=0;i--)
{
if((len-i)%2==1)//����λ
sum+=num[i]-'0';
else//ż��λ
{
tmp=(num[i]-'0')*2;
sum+=tmp>=10?tmp-9:tmp;
}
}
printf("sum=%d\n",sum);
if(sum%10==0)
printf("�ǡ�");
else
printf("���ǡ�"); 
}
return 0;
}
