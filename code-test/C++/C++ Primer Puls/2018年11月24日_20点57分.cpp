#include<iostream>
using std::string;
using std::cout;
using std::endl;
int main(){
	void text(string *s);
	string text1 = "Hello", text2 = "Girl!";
	string *ptext1, *ptext2;
	ptext1 = &text1;
	ptext2 = &text2;
	text(&text1);
	cout<<text1<<text2<<endl
	<<ptext1<<"  "<<*ptext1<<endl
	<<ptext2<<"  "<<*ptext2<<endl
	<<text1<<endl
	<<endl;
	
	return 0;
}

void text(string *s){
	string *p;
	p = s;
	*s = *p+" Boy!";
}
