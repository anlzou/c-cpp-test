#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cmath> 
using namespace std;

void fun(int a, int b, int c, int d){
	float x;
	float ans[9];
	int i,j = 0,k;
	for(i = -100; i <= 100; i = i++){
		x = i;
		if((a*x*x*x + b*x*x + c*x + d) == 0)
			ans[j++] = x;
		else{
			cout<<"null";
			break;
		}
	}
	for(k = 2; k < j; k++){
		if((abs(ans[k-1]-ans[k-2]) >= 1) && (abs(ans[k] - ans[k-2]) >= 1) && (abs(ans[k] - ans[k-1]) >= 1))
			for(i = k-2; i <= k; i++)
				printf("%.2f ",ans[i]);
			else{
				cout<<"null";
				break;
			}
	}
	cout<<endl;
}

int main(){
	int a,b,c,d;
	cout<<"ÊäÈëa b c d£º";
	//scanf("%d %d %d %d",&a,&b,&c,&d);
	cin>>a>>b>>c>>d; 
	fun(a,b,c,d);
	cout<<endl;
	return 0;
}
