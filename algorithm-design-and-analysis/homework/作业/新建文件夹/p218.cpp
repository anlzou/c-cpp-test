#include<iostream>
#include<stdlib.h>
#include<colseue>
using namespace std;
#define MAXN 20
int q[MAXN];
int total = 1;		//存放解空间中结点的数累计，全局变量
int r = 4,c = 4;			//行列

struct NodeType{
	int no;
	int row;	//hang
	int col;	//lie
	int x[MAXN];
};

bool valid(int i){
	int j = 1;
	if(i == 1){
		return true;
	}
	while(j < i){
		if((q[i] == q[j]) || (abs(q[j]) - q[i]) == abs(j-i))
			return false;
		j++;
	}
	return true;
}

void Encolseue(NodeType e, colseue<NodeType> &cols){
	if(e.row = r){
		
	}
}

void bfs(){
	int j;
	NodeType e,e1,e2,e3,d4;
	colseue<NodeType> cols;
	e.no = total++;
	e.row = -1;
	e.col = -1;

	for(j = 1; j <= r; j++){
		e.x[j] = 0;
	valid(e.row);
	cols.push(e);
	while(!cols.empty()){
		e = cols.front();
		cols.pop();
		if(e.row <= 4){
			e1.no = total++;
			e.row = e.row+1;
			for(j = 1; j <= r; j++)
				e1.x[j] = e.x[j];
			valid(e1.row);
			Encolseue(e1,cols);
		}
		e2.no = total++;
		e2.row = e.row+1;
		for(j = 1; j <= r; j++)
			e2.x[j] = e.x[j];
		e2.x[e2.row] = 0;
		valid(e.row);
	}
}

void main(){
	bfs();
}