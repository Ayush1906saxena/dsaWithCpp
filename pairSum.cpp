#include <bits/stdc++.h>
#define ayush
using namespace std;

vector<int> pairSum(vector<int> arr, int sum){
	unordered_set<int> set;
	vector<int> res = {};

	for(int i = 0; i < arr.size(); i++){
		int x = sum - arr[i];
		if(set.find(x) != set.end()){
			res.push_back(x);
			res.push_back(arr[i]);
			return res;
		}

		set.insert(arr[i]);
	}
	return res;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector<int> arr = {10, 5, 2, 3, -6, 9, 11};
	int target = 4;
	vector<int> res = pairSum(arr, target);
	for(auto x : res){
		cout<<x<<" ";
	}
}