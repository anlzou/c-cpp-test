#include<stdio.h>
#include<string.h>
int main()
{
	float a;  //4
	char b[2];  //1
	double d;  //8
	long long i;  //8 ������ʹ��� 
	char j[]="abcd";//5 ��һ���ַ���λ\0 
	printf("%d %d %d %d %d",sizeof(a),sizeof(b),sizeof(d),sizeof(i),sizeof(j));
	return 0;
}
