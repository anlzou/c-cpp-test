#include<stdio.h> 
#include<stdlib.h>
int main(int argc,char* argv[]){
	//int n = argc>1 ? atoi(argv[1]):4;
	int n=6;
	for(int j = 1; j <= n; j++){
		int s = 1 << j,k = (1 << n) - s,x;
		for(int y = s - j; y >= 0; y--,putchar('\n')){
			for(x = 0; x < y + k; x++) printf(" ");
			for(x = 0; x + y < s; x++) printf("%c",'!'^y&x);
			for(x = 1; x + y < s; x++) printf("%c",'!'^y&(s-y-x-1));
		}
	}
	return 0;
}

/*
	Name: 
	Copyright: 
	Author: 
	Date: 24/12/18 22:50
	Description: 基本代码来自Sierpinski trangle的实现，字符的想法来自code golf - Draw A Sierpinski Triangle。 
*/

