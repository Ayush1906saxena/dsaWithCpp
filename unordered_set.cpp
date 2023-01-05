#include <bits/stdc++.h>
#define ayush
using namespace std;

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	unordered_set<int> s = {1,2,3,4,5,6,7};

	int key;
	cin>>key;

	if(s.find(key) != s.end())
		cout<<"Key is present"<<endl;
	else cout<<"Key not found"<<endl;
}