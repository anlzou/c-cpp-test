#include<iostream>
using namespace std;
//using std::string::npos;
int main(){
	string text = "smith in day hello world \"hi\"";
	string separators = " ,.\"";
	size_t start = text.find_first_not_of(separators);
	size_t end = 0;
	int word_count = 0;
	while(start != string::npos){
		end = text.find_first_of(separators,start+1);
		if(end == string::npos){
			end = text.length();
		}
		cout<<text.substr(start,end - start)
		<<endl;
		word_count++;
		
		start = text.find_first_not_of(separators,end+1);
	}
	cout<<"You string contained "
	<<word_count<<" word."
	<<endl;
	return 0;
}
