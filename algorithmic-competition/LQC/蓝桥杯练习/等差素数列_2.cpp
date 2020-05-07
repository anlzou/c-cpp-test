#include<stdio.h>
bool isprimy(int x)  //ÅĞ¶ÏÊÇ·ñÊÇËØÊı 
{
	if(x==2)
		return true;
	int i;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
			return false;
	}
	return true;
}


int main()
{
	int i,j,k,m;
	for(i=2;i<=4000;i++)
	{
		if(!isprimy(i))
			continue;
		for(j=1;j<=400;j++)
		{
			k=1;
			m=i;
			while(1)
			{
				m=m+j;
				if(isprimy(m))
				{
					k++;
					if(k>=10)
					{
						printf("%d,%d\n",i,j);
						return 0;
					}
				}
				else
					break;
			}			
		}		
	}
	return 0;
}
