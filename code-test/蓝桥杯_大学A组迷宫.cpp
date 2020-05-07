//Î´³É¹¦ 
#include <iostream>
#include <string.h>
using namespace std;

int vis[20][20];
char mmap[20][20];
int countt = 0;

int find_(int i, int j){
    while(1){

        if(i < 0 || i > 9 || j < 0 || j > 9 ){
            countt++;
            break;
        }
        if(vis[i][j]) {
            break;
        }
        vis[i][j] = 1;
        switch(mmap[i][j]){
            case 'U': i--;break;
            case 'L': j--;break;
            case 'R': j++;break;
            case 'D': i++;break;
            default: break;
        }

    }

    return 0;
}


int main(){
    freopen("A.txt", "r", stdin);
    for(int i = 0; i <10; i++){
        for(int j = 0; j < 10; j++){
            cin >> mmap[i][j];
      }
    }

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            memset(vis, 0, sizeof(vis));
            find_(i, j);
        }
    }

    cout << countt << endl;
}
