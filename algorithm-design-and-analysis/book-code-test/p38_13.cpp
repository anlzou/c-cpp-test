#include<iostream>
#include<string>
#include<map>
using namespace std;

//������ͬvalueֵ���ֵĴβ��洢������dealmap 
void fun(map<string,int> &mymap,map<int,int> &dealmap){
	map<string,int>::iterator my;
	for(my = mymap.begin(); my != mymap.end(); my++){
		dealmap[(*my).second]++;		//mymap��keyֵ�浽�µ�dealmap�����У�ƥ��mymap��value��������1 
	}	
}

void disp(map<int,int> dealmap){
	map<int,int>::iterator deal;
	for(deal = dealmap.begin(); deal != dealmap.end(); deal++){
		cout<<(*deal).first<<":"<<(*deal).second<<endl;
	}	
}

int main(){
	map<string,int> mymap;
	map<int,int> dealmap;	//��Ž����<valueֵ,���ִ���> 
	mymap.insert(pair<string,int>("an001",90));
	mymap.insert(pair<string,int>("an002",91));
	mymap.insert(pair<string,int>("an003",82));
	mymap.insert(pair<string,int>("an004",93));
	mymap.insert(pair<string,int>("an005",93));
	mymap.insert(pair<string,int>("an006",82));
	
	fun(mymap,dealmap);
	disp(dealmap);
	return 0;
} 
