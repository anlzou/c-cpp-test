//δ��� 
//128468643043731391252
//449177399146038697307
#include<stdio.h>
#define M 1000000000000000000000
int main()
{
	long long  x,y;
	long long i=0,j,k;
	long long a[M],b[M];//��λ��ʮλ����λ��ǧλ ����λ��ʮ��λ������λ��ǧ��λ 
	//printf("����һ��������");
	//scanf("%d",&x);
	for(x=10000000000000000000;x<100000000000000000000;x++)
	{
	y=x;
	while(x)//���������λ��������������λ���� 
	{
		a[i]=x%10;
		x/=10;
		i++;
		printf("%d\n",a[i-1]);
	}
	b[i]=0;
	for(j=0;j<i;j++)
	{
		b[j]=1;
		for(k=0;k<i;k++)
		{
			b[j]*=a[j];
		}
		//printf("%d\n",b[j]);
		b[i]+=b[j];
    }
    //printf("%d",b[i]);
    if(b[i]==y)
    printf("�ǻ�����");
    else 
    printf("���ǻ�����"); 
    return 0;
    }
}
