#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL f[120][120],sum[120];
int n,k,t;
int main(){
	scanf("%d%d",&n,&k);
	memset(sum,0,sizeof(sum));
	for(int i=1;i<=n;i++){
		scanf("%d",&t);
		sum[i]=sum[i-1]+t;
	}
	for(int i=1;i<=n;i++) f[i][0]=sum[i];
	for(int i=2;i<=n;i++){
		t=min(i-1,k);
		for(int j=1;j<=t;j++)
		for(int l=2;l<=i;l++) f[i][j]=max(f[i][j],f[l-1][j-1]*(sum[i]-sum[l-1]));
	}
	printf("%I64d\n",f[n][k]);
	return 0;
}
