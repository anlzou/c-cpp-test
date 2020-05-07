#include <stdio.h>  
int main()  
{  
  int n,i,num,max=0,min=0,sum=0,temp;  
  scanf("%d",&n);  
  for(i=0;i<n;i++){  
    scanf("%d",&num);  
    if(i==0){  
     max=min=num;  
    }  
      
    if(num>max){  
      max=num;  
      }  
    if(num<min){  
       min=num;  
    }  
    sum+=num;  
    }  
    printf("%d\n%d\n%d",max,min,sum);  
return 0;  
} 
