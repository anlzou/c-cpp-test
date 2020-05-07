#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc,const char *argv[]){
char num[30];//可以保存30位整数，用字符型保存 
while(gets(num)!=NULL){
int len=(int)strlen(num);
int sum=0;
int tmp;
//printf("%d",len);
for(int i=len-1;i>=0;i--)
{
if((len-i)%2==1)//奇数位
sum+=num[i]-'0';
else//偶数位
{
tmp=(num[i]-'0')*2;
sum+=tmp>=10?tmp-9:tmp;
}
}
printf("sum=%d\n",sum);
if(sum%10==0)
printf("是。");
else
printf("不是。"); 
}
return 0;
}
