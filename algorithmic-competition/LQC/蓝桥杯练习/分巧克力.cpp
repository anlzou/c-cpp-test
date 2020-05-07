//未理解_二分法 

#include <bits/stdc++.h>	//包括了C++几乎所有的头文件
#define N 100005
using namespace std;
int n,k;
struct cho
{
    int h;
    int w;
};
cho c[N];
bool judge(int len)		//judge:判断，断定
{
    int sum=0;
    for(int i=0;i<len;i++)
    {
        sum+=(c[i].h/len)*(c[i].w/len);
        if(sum>=k)
            return 1;
    }
    return 0;
}
int main()
{
    scanf("%d%d",&n,&k);	//n,巧克力个数;k,小朋友个数 
    int low=1;		//最少巧克力 
    int high=100000;
    int mid;
    for(int i=0; i<n; i++)
        scanf("%d%d",&c[i].h,&c[i].w);
    while(low<high-1)
    {
        mid=(low+high)/2;		//min=50000 
        if(!judge(mid))
            high=mid;
        else
            low=mid;
    }
    printf("%d\n",mid-1);
    return 0;
}
