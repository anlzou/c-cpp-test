#include<iostream>
#include<string> 
using std::cout;
using std::endl;
using std::wstring;
int main(){
	cout<<sizeof(wchar_t)<<endl		//���ַ��ͣ�2���ֽ� 
	<<sizeof(char)<<endl			// �ַ���,1���ֽ� 
	<<sizeof(wstring)<<endl			//4���ֽ� 
	<<endl;
	
	wstring str = L"dfasdfgsjfks;jfisd";
	std::wcout<<str<<endl;
	return 0;
}
