#include <bits/stdc++.h>
using namespace std;

int findKthLargest(vector<int> nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for(int num : nums){
    	minHeap.push(num);
    	if(minHeap.size() > k)
    		minHeap.pop();
    }
    return minHeap.top();
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	vector<int> arr = {3,2,3,1,2,4,5,5,6};
	int k = 4;
	cout<<findKthLargest(arr, k);
}

/*
	1,2,3,3
*/