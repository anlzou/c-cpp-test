//未完成 
#include<stdio.h>
#include<string.h>
void getFilePath(char * &string[]){
	printf("输入文件路径：");
	scanf("%s",&string);
	
	if(strstr(string,"////") > -1){
		
	}
	
	FILE *fp;
	fp = fopen(string,"r");
	
	
} 

int main(){
	
	return 0;
} 
