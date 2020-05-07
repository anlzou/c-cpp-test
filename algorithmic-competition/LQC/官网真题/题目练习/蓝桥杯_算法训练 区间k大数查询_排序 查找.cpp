//error
#include<stdio.h>
int main()
{
	int l,r,k;
	int n,m;
	int i=0,data[100],tab[100],asd[50];
	int j=0,b=0;
	int tamp;
	scanf("%d",&n);
	do
	{
		scanf("%d",&data[i]);
		i++;
	}while(i<n);

	scanf("%d",&m);
	do
	{	
	scanf("%d%d%d",&l,&r,&k);
	for(i=0;i<n;i++)
	{
		tab[i]=data[i];
	} 
		
	for(i=l-1;i<r;i++)
	{
		for(j=l;j<r;j++)
		{
			if(tab[i]<tab[j])
			tamp=tab[i];
			tab[i]=tab[j];
			tab[j]=tamp;
		}
	}
	asd[b++]=tab[l+(k-1)];
	m--;
	}while(m>0);
	for(i=0;i<b;i++)
		printf("%d\n",asd[i]);
	return 0;
}

