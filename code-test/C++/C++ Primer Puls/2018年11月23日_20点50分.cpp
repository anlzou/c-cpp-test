#include<iostream>
using std::cout;
using std::string;
using std::endl;
int main(){
	string words[] = {"hello","boy","and","girl"};
	words[2][2] = 't';		//�޸ĵ�3��Ԫ�صĵ�3���ַ� 
	cout<<words[2]<<endl;
	return 0;
} 
