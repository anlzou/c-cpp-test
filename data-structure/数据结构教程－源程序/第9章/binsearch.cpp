#include <stdio.h>
#define MAXL 100
typedef int KeyType;
typedef char InfoType[10];
typedef struct 
{	
	KeyType key;                //KeyType为关键字的数据类型
	InfoType data;              //其他数据
} NodeType;
typedef NodeType SeqList[MAXL];	//顺序表类型

int BinSearch(SeqList R,int n,KeyType k)
{
	int low=0,high=n-1,mid;
	while (low<=high) 
	{
		mid=(low+high)/2;
		if (R[mid].key==k)   	//查找成功返回
			return mid+1;
		if (R[mid].key>k)     	//继续在R[low..mid-1]中查找
			high=mid-1;
		else
			low=mid+1;       	//继续在R[mid+1..high]中查找
	}
	return -1;
}
/*
int BinSearch1(SeqList R,int low,int high,KeyType k)
{  int mid;
   if (low<=high)
   {   
	   mid=(low+high)/2;  //求中间位置
       if (R[mid].key==k) //查找成功返回其逻辑序号mid+1
	     return mid+1;
       if (R[mid].key>k)  //在R[low..mid-1]中递归查找
	     BinSearch1(R,low,mid-1,k);
       else			  //在R[mid+1..high]中递归查找
	     BinSearch1(R,mid+1,high,k);	   
   }
   else
       return -1;
}*/

void main()
{
	int i,n=10;
	SeqList R;
	KeyType a[]={0,1,2,3,4,5,6,7,8,9},x=5;
	for (i=0;i<n;i++)
		R[i].key=a[i];
	printf("R[%d]=%d\n",BinSearch(R,n,x),x);
//	printf("R[%d]=%d\n",BinSearch1(R,a[0],a[9],x),x);
}
