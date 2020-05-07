#include<iostream>
#include<string>
#include<map>
using namespace std;

//计算相同value值出现的次并存储到容器dealmap 
void fun(map<string,int> &mymap,map<int,int> &dealmap){
	map<string,int>::iterator my;
	for(my = mymap.begin(); my != mymap.end(); my++){
		dealmap[(*my).second]++;		//mymap的key值存到新的dealmap容器中，匹配mymap的value，相等则加1 
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
	map<int,int> dealmap;	//存放结果；<value值,出现次数> 
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
