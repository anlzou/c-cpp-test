#include<stdio.h>		//��չŷ������㷨
#include<string.h>
int dp[10000];
bool judge(int x,int y)		//judge:�жϣ��϶� 
{
	int t;
	while(y>0)
	{
		t=x%y;
		x=y;
		y=t;
	}
	if(x==1)
		return true;
	return false;
}
int main()
{
	int a[200],n,i,j,res,mark;		//res:��Ʒ���������Դ	 mark:�Ǻ�; �ߵ�; �ɼ�; ��׼; 
	
	while(scanf("%d",&n)!=EOF)
	{
		res=0;
		mark=0;
		memset(dp,0,sizeof(dp));
		for(i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
		}
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(judge(a[i],a[j]))
				{
					mark=1;
					break;
				}
			}
			if(mark==1)
				break;
		}
		if(mark!=1)
		{
			printf("INF\n");
			continue;
		}
		dp[0]=1;
		for(i=1;i<=n;i++)
			for(j=1;j<10000;j++)
			{
				if(a[i]>j)
					continue;
				if(dp[j-a[i]]==1)
					dp[j]=1;
			}
		for(i=0;i<10000;i++)
		{
			if(dp[i]!=1)
				res++;
		}
		printf("%d\n",res);
	}
	return 0;
}
