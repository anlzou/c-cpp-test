#include<iostream>
#include<stdio.h>
#include<vector>
using namespace std;
vector<vector<int> > ps;

void PSet(int n){
	vector<vector<int> > ps1;
	vector<vector<int> >::iterator it;
	vector<int> s;
	ps.push_back(s);
	for(int i = 1; i <= n; i++){
		ps1 = ps;
		for(it = ps1.begin(); it != ps1.end(); ++it)
			(*it).push_back(i);
		for(it = ps1.begin(); it != ps1.end(); ++it)
			ps.push_back(*it);
	}
}

void Knap(int w[],int v[], int W){
	int count = 0;
	int sumw,sumv;
	int maxi,maxsumw = 0,maxsumv = 0;
	vector<vector<int> >::iterator it;
	vector<int>::iterator sit;
	printf("���\tѡ����Ʒ\t������\t�ܼ�ֵ�ܷ�װ��\n");
	for(it = ps.begin(); it != ps.end(); it++){
		printf("%d\t",count+1);
		sumw = sumv = 0;
		printf("{");
		for(sit = (*it).begin(); sit != (*it).end(); ++sit){
			printf("%d",*sit);
			sumw += w[*sit-1];
			sumv += v[*sit-1];
		}
		printf("}\t\t%d\t%d",sumw,sumv);
		if(sumw <= W){
			printf("��\n");
			if(sumv > maxsumv){
				maxsumw = sumw;
				maxsumv = sumv;
				maxi = count;
			}
		}
		else printf("��\n");
		count++;
	}
	cout<<"��ѷ���Ϊ��";
	cout<<"ѡ����Ʒ";
	cout<<"{";
	for(sit = ps[maxi].begin(); sit != ps[maxi].end(); sit++)
		printf("%d ",*sit);
	cout<<"},";
	printf("��������%d,�ܼ�ֵ:%d\n",maxsumw,maxsumv);
}

int main(){
	int n = 4,W = 6;
	int w[] = {5,3,2,1};
	int v[] = {4,4,3,1};
	PSet(n);
	cout<<"0/1��������ⷽ��"<<endl;
	Knap(w,v,W);
	return 0;
}
