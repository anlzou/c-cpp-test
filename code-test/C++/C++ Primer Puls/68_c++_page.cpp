#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main(){
	float a;
	cout<<"输入一个整数：";
	cin>>a;
	int b = static_cast<int>(a);
	cout<<endl<<b<<endl;
	return 0;
}
