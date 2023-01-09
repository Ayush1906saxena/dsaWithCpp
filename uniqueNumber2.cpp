#include <bits/stdc++.h>
using namespace std;

vector<int> uniqueNumber2(vector<int> arr){
	int n = 0;
	for(int i : arr){
		n = (i ^ n);
	}

	// now we have n = a ^ b; (both a and b are unique)
	// now we know that if a bit is in 'n' then 
	// the bit is set in any one of the number too. so just
	// separate the vector based on this property.

	//now finding position of first setbit in 'n'
	int pos = 0;
	for(int i = 0; i < 32; i++){
		if((n & (1 << i))){
			pos = i;
			break;
		}
	}

	int mask = (1 << pos);

	int a = 0, b = 0;
	for(int i : arr){
		if((i & mask) > 0)
			a = (a ^ i);
		else b = (b ^ i);
	}

	vector<int> res;
	res.push_back(a);
	res.push_back(b);

	return res;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector<int> arr = {1, 3, 5, 4, 3, 1, 5, 7};
	vector<int> res = uniqueNumber2(arr);
	for(int i : res){
		cout<<i<<" ";
	}
}