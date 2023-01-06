#include <bits/stdc++.h>
#define ayush
using namespace std;

int count_bits(int n){
	int res;
	while(n > 0){
		int last_bit = (n & 1);
		res += last_bit;
		n = n >> 1;
	}
	return res;
}

int count_bits_hack(int n){
	int ans = 0;
	while(n > 0){
		n = n & (n-1); // removing the last set bit every time
		ans++;
	}

	return ans;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<count_bits(31);
}