#include <bits/stdc++.h>
#define ll long long
#define F first
#define S second
#define pb push_back
using namespace std;
#define mod 1000000009

ll power(ll a, ll b){
    int res = 1;
    while(b > 0){
        if(b & 1)
            res = (res * a) % mod;

        a = (a * a) % mod;
        b = b >> 1;
    }

    return res;
}

ll locker(ll n){
    if(n == 2)
        return 1;
    if(n == 3)
        return 2;

    ll ans;
    switch(n % 3){
    
    case 0:
        ans = power(3, n/3);
        break;

    case 1:
        ans = 4 * power(3, (n/3) - 1);
        break;

    case 2:
        ans = 2 * power(3, n/3);
        break;
    }

    return ans;
}

int32_t main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int t;
    ll n;
	cin >> t;
	while(t--){
		cin >> n;
		cout<<locker(n)<<endl;
	}

	return 0;
}