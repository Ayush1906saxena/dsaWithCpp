#include <bits/stdc++.h>
#define ayush
using namespace std;

int uniqueNumber(vector<int> arr){
	int res = 0;
	for(int i : arr){
		res = (res ^ i);
	}

	return res;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector<int> arr = {1, 1, 2, 2, 4, 5, 4, 5, 7};
	cout<<uniqueNumber(arr)<<endl;
}