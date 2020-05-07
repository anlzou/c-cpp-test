#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

int main(){
	string str = "heldasdfsHADadfasHADdfjjhadjhadfdkkd";
	int len = str.length();
	string index = "had";
	//str = str.replace(1,2,"as");
	int i;
	int j = 0;
	int a[10];
	string index1 = index;
	for(i=0; i<len; i++){
		if(str.find(index) == '\0')
			break;
		else if(str.find(index))
			a[j++] = str.find(index,i);
		else if(str.find(index1.toupper()))
			a[j++] = str.find(index1,i);
		else if(str.find(index1.tolower()))
			a[j++] = str.find(index1,i);
	}
	cout<<"Î»ÖÃ£º"<<str.find(index)<<endl
	<<"³¤¶È£º"<<len<<endl
	<<a<<endl
	<<str<<endl;
	return 0;
}
