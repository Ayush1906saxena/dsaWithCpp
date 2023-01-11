#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

const int mod = 1e9 + 7;

int powr(int a, int b){
	int res = 1;
	while(b){
		if(b & 1) {
			res *= a;
			res %= mod;
		}

		a *= a;
		a %= mod;
		b = b >> 1;
	}

	return res;
}


using namespace std;

int32_t main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout << powr(2, 200);

	return 0;
}