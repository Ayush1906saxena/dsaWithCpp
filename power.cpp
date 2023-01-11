#include <bits/stdc++.h>
#define ayush
using namespace std;

int powr(int a, int b){
	int res = 1;
	while(b){
		if(b & 1) 
			res *= a;

		a *= a;
		b = b >> 1;
	}

	return res;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<powr(7, 2);
}