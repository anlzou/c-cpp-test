#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<ctime>
int a[100];
using namespace std;
int Sum(int low,int top){
     int sum = 0;
     for(int i=low;i<=top;i++){
          sum+=a[i];
     }
     return sum;
}
int solve(int low,int height)
{
     //只有一枚银币的情况，直接可以确定就是假币
     if(low==height){
          //cout<<low;
          //printf("\n");
          return low+1;
     }
     //有两枚硬币的情况，则比较那一边比较轻，轻的那边是假币
     if(low==height-1){
          if(a[low]<a[height]){
               return low+1;
          }else{
               return height+1;
          }
     }
     //>=三枚硬币的情况，采用分治法
     int mid=(low+height)/2;
     int suml;
     int sumr;
     if((height-low+1)%2==0){
          suml=Sum(low,mid);
          sumr=Sum(mid+1,height);
     }
     else{
     	suml=Sum(low,mid-1);
        sumr=Sum(mid+1,height);
	 }
        
    if(suml==sumr)
    	return mid+1;	
    		
     else if(suml<sumr){
          if((height-low+1)%2==0)
               return solve(low,mid);
          else
               return solve(low,mid-1);
     }
     else
        return solve(mid+1,height);
}
int main()
{
     int n;
     cout<<"硬币个数:";
     cin>>n;
     for(int i=0;i<n;i++)
     {
          a[i]=2;
     }
     srand(time(0));
     a[(rand()%n)]=1;
     for(int i=0;i<n;i++)
     {
          cout<<a[i]<<" ";
     }
     printf("\n");
     //solve(0,n-1);
     printf("不合格硬币是第：%d个\n",solve(0,n-1));

}
