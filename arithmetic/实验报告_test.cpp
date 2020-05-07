#include <stdio.h>
#include <algorithm>
using namespace std;
bool solve(int a[],int n,int &x) {
	sort(a,a+n); //递增排序
	int maxnum=0; //出现次数最多的次数
	int num=1;
	int e=a[0];
	for (int i=1;i<n;i++){
	 	if (a[i]==e){
		 	num++;
			if (num>maxnum){
				maxnum=num;
				x=e;
			}
		}else{ 
			e=a[i];
			num=1;
		}
	}
	if (maxnum>n/2)
		return true;
	else
		return false;
}
int main() { 
	int a[]={1,2,3,4,5,6,7};
	int n=sizeof(a)/sizeof(a[0]);
	int x;
	if (solve(a,n,x))
		printf("出现次数超过所有元素一半的元素为%d\n",x);
	else
		printf("不存在出现次数超过所有元素一半的元素\n");
	return 0;
}

