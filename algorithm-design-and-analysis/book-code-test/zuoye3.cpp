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
     //ֻ��һö���ҵ������ֱ�ӿ���ȷ�����Ǽٱ�
     if(low==height){
          //cout<<low;
          //printf("\n");
          return low+1;
     }
     //����öӲ�ҵ��������Ƚ���һ�߱Ƚ��ᣬ����Ǳ��Ǽٱ�
     if(low==height-1){
          if(a[low]<a[height]){
               return low+1;
          }else{
               return height+1;
          }
     }
     //>=��öӲ�ҵ���������÷��η�
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
     cout<<"Ӳ�Ҹ���:";
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
     printf("���ϸ�Ӳ���ǵڣ�%d��\n",solve(0,n-1));

}
