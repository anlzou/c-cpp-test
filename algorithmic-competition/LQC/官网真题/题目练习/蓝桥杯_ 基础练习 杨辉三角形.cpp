#include<stdio.h>
int main()
{
	int n;
	int i;
	int a[35][35];
	scanf("%d",&n);      
        //i���������У�j����������  
        for (int i = 0; i < n; i++) {  
            for(int j=0; j<=i; j++){  
                //�����������������ߵ�Ԫ�أ�ֵΪ1��������м��Ԫ�أ�ֵλ����֮��  
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
