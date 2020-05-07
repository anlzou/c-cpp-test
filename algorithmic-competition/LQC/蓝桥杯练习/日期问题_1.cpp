#include<stdio.h>
#include<string.h>
int main()
{
	int x, y,i,g,h;
	char date[20];
	char a[20][20],min[20]="19600101",max[20]="20591231";
	while(scanf("%s",&date)!=EOF)
	{
		a[0][0]='1';a[0][1]='9';a[0][2]=date[0];a[0][3]=date[1];a[0][4]=date[3];a[0][5]=date[4];a[0][6]=date[6];a[0][7]=date[7];a[0][8]='\0';
		a[1][0]='1';a[1][1]='9';a[1][2]=date[6];a[1][3]=date[7];a[1][4]=date[0];a[1][5]=date[1];a[1][6]=date[3];a[1][7]=date[4];a[1][8]='\0';
		a[2][0]='1';a[2][1]='9';a[2][2]=date[6];a[2][3]=date[7];a[2][4]=date[3];a[2][5]=date[4];a[2][6]=date[0];a[2][7]=date[1];a[2][8]='\0';


		a[3][0]='2';a[3][1]='0';a[3][2]=date[0];a[3][3]=date[1];a[3][4]=date[3];a[3][5]=date[4];a[3][6]=date[6];a[3][7]=date[7];a[3][8]='\0';
		a[4][0]='2';a[4][1]='0';a[4][2]=date[6];a[4][3]=date[7];a[4][4]=date[0];a[4][5]=date[1];a[4][6]=date[3];a[4][7]=date[4];a[4][8]='\0';
		a[5][0]='2';a[5][1]='0';a[5][2]=date[6];a[5][3]=date[7];a[5][4]=date[3];a[5][5]=date[4];a[5][6]=date[0];a[5][7]=date[1];a[5][8]='\0';
	
		
		for(i=0;i<6;i++)
		{
			x=strcmp(a[i],min);
			y=strcmp(a[i],max);
			g=(a[i][4]-'0')*10+a[i][5]-'0';
			h=(a[i][6]-'0')*10+a[i][7]-'0';
			if(g<1||g>12 || h<1||h>31)
				continue;
			if(x>=0 && y<=0)
				printf("%c%c%c%c-%c%c-%c%c\n",a[i][0],a[i][1],a[i][2],a[i][3],a[i][4],a[i][5],a[i][6],a[i][7]);
		}
		
	}
	return 0;
}

