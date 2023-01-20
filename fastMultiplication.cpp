#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back
const int mod = 1e9 + 7;
/*
	3 * 5 = 3 * 0101 , res = 0
	0010, res = 5, val = 5
	0001, res = 5, val = 10
	0000, res = 5 + 10, val = 15

	res = 15

*/
int mul(int a, int b){
	int res = 0;
	while(b){
		if(b & 1){
			res += a;
			res = res % mod;
		}

		a += a;
		a = a % mod;
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

	cout<<mul(101, 1337337);

	return 0;
}