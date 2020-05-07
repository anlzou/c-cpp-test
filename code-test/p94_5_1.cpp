//未完成 
#include<stdio.h>
#include<math.h>
int main()
{
	int i,j,k;
	int x,y,z;
	int a[6];
	printf("打印水仙花数：\n");
	for(i=100;i<1000;i++)
	{
		j=0;
		x=i;
		while(x)
		{
			a[j++]=x%10;
			x/=10;
		}
		for(k=0;k<j;k++)
		{
			if(a[k]>0)
			{
			y=pow(a[k],j);
		    z+=y;
		 	}
	    }
	    if(i==z)
		printf("%d\n",i);
	}
	return 0;
}
