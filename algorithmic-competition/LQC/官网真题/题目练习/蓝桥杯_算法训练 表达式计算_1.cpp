//�������ͨ������Dev��������ͨ�� 
#include<iostream>      
#include<cstring>      
#include<stack>      
#include<algorithm>   
#include<cmath>      
using namespace std;      
      
stack<char> s1,s2;      
stack<int> s3;      
char ch[150]={0};//��������ʽ      
int num[11];//������ʱ������      
            
int priority(char ch)//���ڱȽ��ַ����ȼ�      
{      
    if(ch==')'||ch=='(') return 1;      
    if(ch=='+'||ch=='-') return 2;      
    if(ch=='*'||ch=='/') return 3;           
}      
           
int Scal(int x,int y,char ope)//������������      
{      
    if(ope=='+') return x+y;      
    if(ope=='-') return x-y;      
    if(ope=='*') return x*y;      
    if(ope=='/'&&y!=0) return x/y;      
}      
      
void Transform(int n)//����׺���ʽת��Ϊ��׺���ʽ      
{      
    int k=0;      
    for(int i=0;i<n;i++)      
    {      
        if(ch[i]>='0'&&ch[i]<='9')//�������ֵ����      
        {      
            if(i+1<n&&(ch[i+1]<'0'||ch[i+1]>'9')||i==n-1)//�������һ�����֣�����һ��Ԫ���������      
            {      
                s2.push(ch[i]);      
                s2.push('#');      
            }      
            else      
                s2.push(ch[i]);      
        }      
        else      
        {      
            if(s1.empty()||ch[i]=='('||priority(ch[i])>priority(s1.top()))//�������������3�����ֱ����ջ      
                s1.push(ch[i]);                   
            else if(ch[i]==')')//���������ŵ����      
            {      
                while(s1.top()!='(')      
                {      
                    s2.push(s1.top());        
                    s1.pop();      
                }      
                s1.pop();      
            }      
            else//����������ȼ�С�ڻ����S1ջ������������ȼ�    
            {      
                while(!s1.empty()&&priority(ch[i])<=priority(s1.top())&&s1.top()!='(')//���ﻹҪע����������      
                {      
                    s2.push(s1.top());      
                    s1.pop();                 
                }      
                s1.push(ch[i]);       
            }         
        }      
      
    }      
    while(!s1.empty())//�����ʽ����      
    {      
        s2.push(s1.top());      
        s1.pop();             
    }      
    while(!s2.empty()) //��ջ��Ԫ�طŻ�S2��      
    {      
        ch[k++]=s2.top();      
        s2.pop();         
    }      
    reverse(ch,ch+k);//��ch[]����      
    ch[k]=0;      
}      
      
int Cal(int n)//��׺���ʽ����      
{      
    int x,y,tmp=0,k=0;      
    for(int i=0;i<n;i++)      
    {      
        if(ch[i]=='#')//��#ֱ������      
            continue;      
        else if(ch[i]=='+'||ch[i]=='-'||ch[i]=='*'||ch[i]=='/')//�����������ջ����Ԫ�ؼ����Ż�ջ      
        {      
            x=s3.top();      
            s3.pop();      
            y=s3.top();      
            s3.pop();      
            x=Scal(y,x,ch[i]);      
            s3.push(x);      
        }      
        else//�������ַ�      
        {      
            if(ch[i+1]=='#')//��һ��Ԫ����#      
            {      
                num[k++]=ch[i]-'0';      
                for(int i=0;i<k;i++)      
                    tmp+=(num[i]*(int)pow(10,k-i-1));      
                s3.push(tmp);      
                tmp=0;      
                k=0;                      
            }      
            else//��һ��Ԫ�ز���#      
            {      
                num[k++]=ch[i]-'0';       
            }         
        }      
    }      
    return s3.top();      
}      
      
int main()      
{      
    gets(ch);      
    Transform(strlen(ch));      
    cout<<Cal(strlen(ch))<<endl;      
    return 0;      
}
