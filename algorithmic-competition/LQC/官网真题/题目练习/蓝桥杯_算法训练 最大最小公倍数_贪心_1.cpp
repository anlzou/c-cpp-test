#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{
    long long int n,ans;
    cin>>n;
    if(n<3)
        ans=n;
    else{
    if(n%2!=0)
        ans=n*(n-1)*(n-2);
    else if(n%3!=0)
        ans=n*(n-1)*(n-3);
    else
        ans=(n-1)*(n-2)*(n-3);
    }
     cout<<ans<<endl;
	return  0;
}

