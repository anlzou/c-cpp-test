#include <iostream>  
using namespace std;    
#define MAXSIZE 26  
void Drawing(int,int);//��������  
  
int main()  
{  
    int n,m;  
    while(cin>>n && ((n >=1) && (n <= 26)))  
    {  
        cin>>m;  
        Drawing(n,m);  
    }  
    return 0;  
}  
  
//ʵ����ĸͼ��  
void Drawing(int n,int m)  
{  
    int i,j;  
    int point = 0;  
    char str;  
    char matrix[MAXSIZE][MAXSIZE];  
  
    /*�˴�Ϊ�㷨��������*/  
    //��һ��for�������ַ���������ַ�  
    for(i = 0;i < n;i++)  
    {  
        str = 'A';  
        for(j = i;j  < m;j++)//�˴�����ѭ���������ƴ洢�ַ���  
        {  
            matrix[i][j] = str++;  
        }  
        str = 'A';  
        for(j = i - 1;j >= 0;j --)  
        {  
            matrix[i][j] = ++str;  
        }  
    }  
  
    for(i = 0;i < n;i ++)//�˴���������ַ�����Ԫ��  
    {  
        for(j = 0;j < m;j ++)  
        {  
            cout<<matrix[i][j];  
        }  
  
        cout<<endl;  
    }  
  
    cout<<endl;  
} 
