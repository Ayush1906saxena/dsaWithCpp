#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

const int mod = 1e9 + 7;
const int sz = 2;
using namespace std;

struct Mat {
	int m[sz][sz];
	
	Mat() {
		memset(m, 0, sizeof(m));
	}

	void identity() {
		for(int i = 0; i < sz; i++)
			m[i][i] = 1;
	}

	Mat operator* (Mat a) {
		Mat res;

		for(int i = 0; i < sz; i++){
			for(int j = 0; j < sz; j++){
				for(int k = 0; k < sz; k++){
					res[i][j] += m[i][k] * a.m[k][j];
					res[i][j] %= mod;
				}
			}
		}
	}
}

int Fib(int n) {

}

int32_t main() {
	
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

	int n = 5;
	cout << Fib(n) << endl;

	return 0;
}