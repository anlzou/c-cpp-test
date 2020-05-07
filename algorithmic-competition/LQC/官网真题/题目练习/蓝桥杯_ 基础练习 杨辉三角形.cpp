#include<stdio.h>
int main()
{
	int n;
	int i;
	int a[35][35];
	scanf("%d",&n);      
        //i用来控制行，j用来控制列  
        for (int i = 0; i < n; i++) {  
            for(int j=0; j<=i; j++){  
                //两种情况，如果是两边的元素，值为1，如果是中间的元素，值位两数之和  
                if(j==0 || i==j){  
                    a[i][j] = 1;  
                }else{  
                    a[i][j] = a[i-1][j-1] + a[i-1][j];  
                }  
            }  
        }  
          
        for(int i=0; i<n; i++){  
            for(int j=0; j<=i; j++){  
                printf("%d ",a[i][j]);  
            } 
            printf("\n");
        }
	return 0;
}
