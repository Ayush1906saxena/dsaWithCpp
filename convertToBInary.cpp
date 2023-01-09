#include <bits/stdc++.h>
#define ayush
using namespace std;

int convertToBinary(int n){
	int res = 0;
	int mul = 1;
	while(n > 0){
		int last_bit = (n & 1);
		res += (last_bit * mul);
		n = n >> 1;
		mul = mul * 10;
	}

	return res;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<convertToBinary(31);
}