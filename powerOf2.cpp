#include <bits/stdc++.h>
#define ayush
using namespace std;

bool powerOfTwo(int n){
	return (n & (n-1)) == 0;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<powerOfTwo(16);
}