#include<iostream>
using std::cout;
using std::string;
using std::endl;
int main(){
	string words[] = {"hello","boy","and","girl"};
	words[2][2] = 't';		//修改第3个元素的第3个字符 
	cout<<words[2]<<endl;
	return 0;
} 
