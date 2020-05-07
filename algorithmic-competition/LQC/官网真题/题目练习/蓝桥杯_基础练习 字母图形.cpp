//70 70

#include<stdio.h>
int main()
{
	int m,n;//––∫Õ¡–
	int i,j,k;
	scanf("%d %d",&m,&n);
	if(m<1||n<1||m>26||n>26)
		return 0;
	for(i=0;i<m;i++)
	{
		for(k=i;k>0;k--)
		{
			printf("%c",65+k);
		}
		for(j=0;j<n-i;j++)
		{
			printf("%c",65+j);
		}
		printf("\n");
	} 
	return 0;
}

#include <stdio.h>   
int main(){  
    int n,m;  
    int i,j,k;  
    scanf("%d%d",&n,&m);  
        if(n<1||m<1||n>26||m>26){  
            return 0;  
        }  
        for(i=0;i<n;i++){  
            for(k=i;k>0;k--){  
                printf("%c",'A'+k);  
            }  
            for(j=0;j<m-i;j++){  
                 printf("%c",'A'+j);  
            }  
            printf("\n");  
        } 
    return 0;  
}
