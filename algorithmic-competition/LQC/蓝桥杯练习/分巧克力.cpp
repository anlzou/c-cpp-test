//δ���_���ַ� 

#include <bits/stdc++.h>	//������C++�������е�ͷ�ļ�
#define N 100005
using namespace std;
int n,k;
struct cho
{
    int h;
    int w;
};
cho c[N];
bool judge(int len)		//judge:�жϣ��϶�
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
    scanf("%d%d",&n,&k);	//n,�ɿ�������;k,С���Ѹ��� 
    int low=1;		//�����ɿ��� 
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
