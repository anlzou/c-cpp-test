#include<iostream>
#include<string> 
using std::cout;
using std::endl;
using std::wstring;
int main(){
	cout<<sizeof(wchar_t)<<endl		//宽字符型，2个字节 
	<<sizeof(char)<<endl			// 字符型,1个字节 
	<<sizeof(wstring)<<endl			//4个字节 
	<<endl;
	
	wstring str = L"dfasdfgsjfks;jfisd";
	std::wcout<<str<<endl;
	return 0;
}
