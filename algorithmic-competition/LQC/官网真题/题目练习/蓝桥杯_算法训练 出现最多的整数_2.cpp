#include<iostream>
#include<cctype>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=0)//ע������������ 
	return 0;
	int a[n];
	int b[n];
	for(int i=0;i<n;i++)
		b[i]=0;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++) //n��ֵȫ����һ�� 
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				++b[i];	//ÿ��ֵ���ֵĴ��� 
			}
		}	
	}
	int max=b[0];
	int k=0;//��¼���ֵ���±� 
	for(int i=0;i<n;i++)
	{
		if(b[i]>max)
		{
			max=b[i];
			k=i;
		 } 	
	}
	cout<<a[k];
	return 0;
 }
