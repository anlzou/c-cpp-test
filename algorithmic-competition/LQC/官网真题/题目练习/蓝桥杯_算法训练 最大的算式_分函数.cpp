//error

#include<bits/stdc++.h>  //C++中包含的所有头文件
using namespace std;
typedef long long LL;
LL f[120][120],sum[120];
int n,k,t;

void fun1(int n)
{
	for(int i=1; i<=n; i++)
	{
		scanf("%d",&t);
		sum[i]=sum[i-1]+t;
	}
}

void fun2(int n,int k)
{
	for(int i=1;i<=n;i++) f[i][0]=sum[i];
	for(int i=2;i<=n;i++)
	{
		t=min(i-1,k);
		for(int j=1;j<=t;j++)
			for(int l=2;l<=i;l++)
				f[i][j]=max(f[i][j],f[l-1][j-1]*(sum[i]-sum[l-1]));
	}
}

int main()
{
	scanf("%d%d",&n,&k);
	memset(sum,0,sizeof(sum));
	fun1(n);
	fun2(n,k);
	printf("%I64d\n",f[n][k]); 
	return 0;
}

