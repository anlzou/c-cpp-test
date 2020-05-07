#include <iostream>  
using namespace std;    
#define MAXSIZE 26  
void Drawing(int,int);//函数声明  
  
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
  
//实现字母图形  
void Drawing(int n,int m)  
{  
    int i,j;  
    int point = 0;  
    char str;  
    char matrix[MAXSIZE][MAXSIZE];  
  
    /*此处为算法精华部分*/  
    //第一个for用来向字符数组里存字符  
    for(i = 0;i < n;i++)  
    {  
        str = 'A';  
        for(j = i;j  < m;j++)//此处两个循环用来控制存储字符的  
        {  
            matrix[i][j] = str++;  
        }  
        str = 'A';  
        for(j = i - 1;j >= 0;j --)  
        {  
            matrix[i][j] = ++str;  
        }  
    }  
  
    for(i = 0;i < n;i ++)//此处用来输出字符数组元素  
    {  
        for(j = 0;j < m;j ++)  
        {  
            cout<<matrix[i][j];  
        }  
  
        cout<<endl;  
    }  
  
    cout<<endl;  
} 
