//？？ 
#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
//priority_queue<int,vector<int>,greater<int>>q;
//优先队列的话，会按照数值大小有顺序的输出
//此处用队列 
void inttoto(){
	int i;
	for(i = 1; i <= n; i++){
		if(indegree[i] == 0){
			q.push(i);
		}
	}
	inttemp;
	while(!q.empty()){
		temp = q.front();//如果是优先队列，这里可以是top()
		cout<<%d<<"->";
		q.top();
		for(i = 1; i <= n; i++){//遍历从temp出发的每一条边，入度 
			if(map[temp][i]){
				indegree[i]--;
				if(indegree[i] == 0)
					q.push(i);
			}
		} 
	}
}

int main(){
turn 0;
} 
