struct data
{
	int year,mounth,day;
};

int a[2][13]={{0,31,29,31,30,31,30,31,31,30,31,30,31},
			  {0,31,28,31,30,31,30,31,31,30,31,30,31}};

int leap(int x)		//�ж��Ƿ�Ϊ���� 
{
	if((x%4==0&&x%100!=0)||x%400==0)
		return 1;		//�� 
	else
		return 0;		//���� 
}

int returnalldays(data x)
{
	int i,y,sum=x.day;
	y=leap(x.year);
	for(i=1;i<x.mounth+1;i++)
	{
			sum+=a[y][i];
	}
	return sum;
}

