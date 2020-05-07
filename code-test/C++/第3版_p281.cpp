/*
	Name: 
	Copyright: 
	Author: 
	Date: 06/05/18 00:00
	Description: 虚函数_实现抽象类的成员函数 
*/


#include<iostream>
#include<string.h>
using namespace std;

class CEmployee
{
	public:
		int m_ID;
		char m_Name[128];
		char m_Depart[128];
		virtual void OutputName()=0;
};

class COperator:public CEmployee
{
	public:
		char m_Password[128];
		void OutputName()
		{
			cout<<"操作员姓名："<<m_Name<<endl;
		}
		COperator()
		{
			strcpy(m_Name,"MR");
		}
};

class CSystemManager:public CEmployee
{
	public:
		char m_password[128];
		void OutputName()
		{
			cout<<"系统管理员姓名："<<m_Name<<endl;
		}
		CSystemManager()
		{
			strcpy(m_Name,"SK");
		}
};

int main(int argc,char *argv[])
{
	CEmployee *pWorker;
	
	pWorker = new COperator();
	pWorker->OutputName();
	delete pWorker;
	pWorker = NULL;
	
	pWorker = new CSystemManager();
	pWorker->OutputName();
	delete pWorker;
	pWorker = NULL;
	
	return 0;
} 
