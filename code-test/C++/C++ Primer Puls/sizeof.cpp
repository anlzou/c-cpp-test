#include<iostream>
#include<cmath>
using std::cout;
using std::endl;

int main(){
	cout<<"char:"<<sizeof(char)<<" 长度："<<pow(2,7*sizeof(char))<<endl;
	cout<<"int:"<<sizeof(int)<<" 长度："<<pow(2,7*sizeof(int))<<endl;
	cout<<"long int:"<<sizeof(long int)<<" 长度："<<pow(2,7*sizeof(long int))<<endl;
	cout<<"float:"<<sizeof(float)<<" 长度："<<pow(2,7*sizeof(float))<<endl;
	cout<<"double:"<<sizeof(double)<<" 长度："<<pow(2,7*sizeof(double))<<endl;
	cout<<"long double:"<<sizeof(long double)<<" 长度："<<pow(2,7*sizeof(long double))<<endl;
	cout<<"long long:"<<sizeof(long long)<<" 长度："<<pow(2,7*sizeof(long long))<<endl;
	return 0;
}

