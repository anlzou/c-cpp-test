#include<iostream>
#include<string.h>
using namespace std;

//×Ö·û´®Ê××ÖÄ¸ÅÅÐò 
void sort(char *name[], int n){
	char *temp;
	int i,j,k;
	for(i = 0; i < n-1; i++){
		k = i;
		for(j = i+1; j < n; j++)
			if(strcmp(name[i],name[j])>0)
				k = j;
		if(k != i){
			temp = name[i];
			name[i] = name[k];
			name[k] = temp;
		}
	}
}

void print(char *name[], int n){
	int i;
	for(i = 0; i < n; i++){
		cout<<name[i]<<" ";
	}
}

int main(){
	char data[5][10] = {"china","america","australia","france","german"};
	//char *name[5];
	int iCount = 5;
	int i;
	char *name[5];
	for(i = 0; i < iCount; i++)
		name[i] = data[i];
		
	print(name, iCount);
	sort(name, iCount);
	cout<<endl;
	print(name, iCount);
	return 0;
}
