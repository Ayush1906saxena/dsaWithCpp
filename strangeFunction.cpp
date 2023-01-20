#include <bits/stdc++.h>
#define F first
#define S second
#define pb push_back
const long long int mod = 1e9 + 7;
using namespace std;

int power(long long a, long long b){
	int res = 1;
	while(b){
		if(b & 1){
			res *= a;
			res %= mod;
		}

		a *= a;
		a %= mod;
		b = b >> 1;
	}

	return res;
}

int solve(long long A, long long N){
    int res = power(A, N);
    cout<<res<<endl;
    
    while(res > 9){
    	int digSum = 0;
    	int k = res;
    	while(k){
    		digSum += (k % 10);
    		k /= 10;
    	}

    	res = digSum;
    }

    return res;
}

int32_t main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<solve(7, 7);
	return 0;
}