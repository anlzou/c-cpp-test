//#include "sqstring.cpp"
#include <stdio.h>
#define MaxSize 100
typedef struct
{	
	char data[MaxSize];
	int length;			//串长
} SqString;
void StrAssign(SqString &s,char cstr[])	//字符串常量赋给串s
{
	int i;
	for (i=0;cstr[i]!='\0';i++)
		s.data[i]=cstr[i];
	s.length=i;
}
void StrCopy(SqString &s,SqString t)	//串复制
{
	int i;
	for (i=0;i<t.length;i++)
		s.data[i]=t.data[i];
	s.length=t.length;
}
bool StrEqual(SqString s,SqString t)	//判串相等
{
	bool same=true;
	int i;
	if (s.length!=t.length)				//长度不相等时返回0
		same=false;
	else 
		for (i=0;i<s.length;i++)
			if (s.data[i]!=t.data[i])	//有一个对应字符不相同时返回0
			{	same=false;
				break;
			}
	return same;
}
int StrLength(SqString s)	//求串长
{
	return s.length;
}
SqString Concat(SqString s,SqString t)	//串连接
{
	SqString str;
	int i;
	str.length=s.length+t.length;
	for (i=0;i<s.length;i++)	//将s.data[0..s.length-1]复制到str
		str.data[i]=s.data[i];
	for (i=0;i<t.length;i++)	//将t.data[0..t.length-1]复制到str
		str.data[s.length+i]=t.data[i];
	return str;
}
SqString SubStr(SqString s,int i,int j)	//求子串
{
	SqString str;
	int k;
	str.length=0;
	if (i<=0 || i>s.length || j<0 || i+j-1>s.length)
		return str;					//参数不正确时返回空串
	for (k=i-1;k<i+j-1;k++)  		//将s.data[i..i+j]复制到str
		str.data[k-i+1]=s.data[k];
	str.length=j;
	return str;
} 
SqString InsStr(SqString s1,int i,SqString s2)	//插入串
{
	int j;
	SqString str;
	str.length=0;
	if (i<=0 || i>s1.length+1)  //参数不正确时返回空串
		return str;
	for (j=0;j<i-1;j++)      		//将s1.data[0..i-2]复制到str
		str.data[j]=s1.data[j];
	for (j=0;j<s2.length;j++)		//将s2.data[0..s2.length-1]复制到str
		str.data[i+j-1]=s2.data[j];
	for (j=i-1;j<s1.length;j++)		//将s1.data[i-1..s1.length-1]复制到str
		str.data[s2.length+j]=s1.data[j];
	str.length=s1.length+s2.length;
	return str;
}
SqString DelStr(SqString s,int i,int j)		//串删去
{
	int k;
	SqString str;
	str.length=0;
	if (i<=0 || i>s.length || i+j>s.length+1) //参数不正确时返回空串
		return str;
	for (k=0;k<i-1;k++)       		//将s.data[0..i-2]复制到str
		str.data[k]=s.data[k];
	for (k=i+j-1;k<s.length;k++)	//将s.data[i+j-1..s.length-1]复制到str
		str.data[k-j]=s.data[k];
	str.length=s.length-j;
	return str;
}
SqString RepStr(SqString s,int i,int j,SqString t)	//子串替换
{
	int k;
	SqString str;
	str.length=0;
	if (i<=0 || i>s.length || i+j-1>s.length) //参数不正确时返回空串
		return str;
	for (k=0;k<i-1;k++)				//将s.data[0..i-2]复制到str
		str.data[k]=s.data[k];
	for (k=0;k<t.length;k++)   		//将t.data[0..t.length-1]复制到str
		str.data[i+k-1]=t.data[k];
	for (k=i+j-1;k<s.length;k++)	//将s.data[i+j-1..s.length-1]复制到str
		str.data[t.length+k-j]=s.data[k];
	str.length=s.length-j+t.length;
	return str;
}
void DispStr(SqString s)	//输出串s
{
	int i;
	if (s.length>0)
	{	for (i=0;i<s.length;i++)
			printf("%c",s.data[i]);
		printf("\n");
	}
}

void GetNext(SqString t,int next[])  /*由模式串t求出next值*/
{
	int j,k;
	j=0;k=-1;next[0]=-1;
	while (j<t.length-1) 
	{	
		if (k==-1 || t.data[j]==t.data[k]) 	/*k为-1或比较的字符相等时*/
		{	
			j++;k++;
			next[j]=k;
       	}
       	else  k=next[k];
	}
}
int KMPIndex(SqString s,SqString t)  /*KMP算法*/
{
	int next[MaxSize],i=0,j=0;
	GetNext(t,next);
	while (i<s.length && j<t.length) 
	{
		if (j==-1 || s.data[i]==t.data[j]) 
		{
			i++;j++;  			/*i,j各增1*/
		}
		else j=next[j]; 		/*i不变,j后退*/
    }
    if (j>=t.length)
		return(i-t.length);  		/*返回匹配模式串的首字符下标*/
    else  
		return(-1);        		/*返回不匹配标志*/
}
void main()
{
	SqString s,t;
	StrAssign(s,"ababcabcacbab");
	StrAssign(t,"abcac");
	printf("s:");DispStr(s);
	printf("t:");DispStr(t);
	printf("位置:%d\n",KMPIndex(s,t));
}
