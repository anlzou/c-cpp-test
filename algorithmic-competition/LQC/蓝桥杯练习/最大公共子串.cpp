#include <stdio.h>
#include <string.h>	//memset()

#define N 256
int p=0;								//标记串的位置 
int f(const char* s1, const char* s2)	//const——常量
{
	int a[N][N];
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int i,j;							
	memset(a,0,sizeof(int)*N*N);
	int max = 0;
	for(i=1; i<=len1; i++){
		for(j=1; j<=len2; j++){
			if(s1[i-1]==s2[j-1]) {
				a[i][j] = a[i-1][j-1]+1;  //填空
				if(a[i][j] > max) max = a[i][j];
				p=j;
			}
		}
	}
	
	return max;
}

int main()
{
	int i=0;
	int max;
	char b[] = "abcdkkk";
	char a[] = "baabcdadabc";
	max=f(b, a);
	for(i = p-max; i<max; i++)
		printf("%s",a[i]);
	return 0;
}
