//���� 
#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
//priority_queue<int,vector<int>,greater<int>>q;
//���ȶ��еĻ����ᰴ����ֵ��С��˳������
//�˴��ö��� 
void inttoto(){
	int i;
	for(i = 1; i <= n; i++){
		if(indegree[i] == 0){
			q.push(i);
		}
	}
	inttemp;
	while(!q.empty()){
		temp = q.front();//��������ȶ��У����������top()
		cout<<%d<<"->";
		q.top();
		for(i = 1; i <= n; i++){//������temp������ÿһ���ߣ���� 
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
