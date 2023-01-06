#include <bits/stdc++.h>
#define ayush
using namespace std;

int distributeCandies(vector<int> candies) {
	set<int> set;
	for(int i : candies)
		set.insert(i);

	int n = candies.size();
	if(set.size() >= n/2) return n/2;
	else return set.size();
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	vector<int> candies = {1,1,2,2,3,3};
	cout<<distributeCandies(candies);
}