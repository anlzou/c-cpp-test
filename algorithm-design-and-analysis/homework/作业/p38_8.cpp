#include<stdio.h>
#include<string.h>
int main(){
	char string[20];
	int strLen;
	int i,j;
	scanf("%s",string);
	strLen = strlen(string);
	for(i = 0; i < strLen/2; i++){
		if(string[i]!=string[strLen-i-1]){
			printf("���ǻ�����");
			return 0; 
		} 
	}
	printf("�ǻ�����");
	return 0;
}
