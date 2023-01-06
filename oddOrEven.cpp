#include <bits/stdc++.h>
#define ayush
using namespace std;

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int n;
	cin >> n;
	cout<<"The number "<<n;
	if(n&1)
		cout<<" is odd"<<endl;
	else cout<<" is even"<<endl;
}