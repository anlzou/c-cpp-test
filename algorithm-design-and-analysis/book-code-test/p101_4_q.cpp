//qing error
#include<iostream>
using namespace std;
//求出一个序列的最大连续子序列 
int max(int a,int b,int c)
{
	int Max;
	Max=a>b?a:b;
	Max=Max>c?Max:c;
	return Max;
}
int l=0,r=0;
void maxSubSum4(int a[],int left,int right,int &max)
{
	if(left==right)
		{
			if(a[left]>=max)
				{
					l=left;r=right;
					max=a[left];
				}
					return;
		}
	int maxLeftSum,maxRightSum;//左右子序列的最大序列之和
	int MaxLeft,MaxRight;//左右边的最大值;
	int Maxzuo,Maxyou;
	int mid=(left+right)/2;
	int i,j,l1,r1;
	MaxLeft=0,Maxzuo=0;
	for(i=mid;i>=left;i--)
	{ 
		Maxzuo+=a[i];
		if(Maxzuo>MaxLeft)
		{
			l1=i;
			MaxLeft=Maxzuo;
		}
	}
	MaxRight=0,Maxyou=0;
	for(j=mid+1;j<=right;j++)
	{
		Maxyou+=a[j];
		if(Maxyou>MaxRight)
		{
		r1=j;
		MaxRight=Maxyou;
	    }
	}
	if((MaxLeft+MaxRight)>max)
	{
		l=l1;
		r=r1;
		max=MaxLeft+MaxRight;
	}
	maxSubSum4(a,left,mid,max);
	maxSubSum4(a,mid+1,right,max);
}
int main()
{
	int a[]={-2,11,-40,13,5,-2},n=6;
	int b[]={-6,2,4,-7,5,3,2,-1,6,-9,10,-2},m=12;
	int i,j,max=0;
	maxSubSum4(a,0,n-1,max);
	cout<<"a序列的最大连续子序列的和为"<<max<<endl;
	cout<<"这个序列为："<<endl;
	for(int x=l;x<=r;x++)
	{
		cout<<a[x]<<" ";
	}
	cout<<endl;
	max=0;
	maxSubSum4(b,0,m-1,max);
	cout<<"b序列的最大连续子序列的和为"<<max<<endl;
	cout<<"这个序列为："<<endl;
	for(int x=l;x<=r;x++)
	{
		cout<<b[x]<<" ";
	}
	
	
	
	return 0;
}
