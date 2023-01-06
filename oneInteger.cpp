#include <bits/stdc++.h>
#define ayush
#define push_back pb
using namespace std;

vector<int> findClosestElements(vector<int> arr, int k, int x) {
	vector<int>ans;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> minHeap;
   	int n = arr.size();

   	for(int i = 0; i < n; i++){
   		int diff = abs(arr[i] - x);
   		minHeap.push({diff, arr[i]});
   	}

   	while(k--){
   		ans.pb(minHeap.top().second);
   		minHeap.pop();
   	}

   	return ans;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<maximumScore(2,4,6);
}