#include "iostream"
#include <queue>
using namespace std;

int main(){
	int arr[] = {10, 15, 20, 13, 6, 90};
	int n = sizeof(arr) / sizeof(int);

	// max heap by default
	priority_queue<int> max_heap;

	// now making a min_heap
	priority_queue<int, vector<int>, greater<int>> min_heap;

	for(int x : arr){
		max_heap.push(x);
		min_heap.push(x);
	}

	while(!max_heap.empty()){
		cout<<max_heap.top()<<" ";
		max_heap.pop();
	}
	cout<<endl;

	while(!min_heap.empty()){
		cout<<min_heap.top()<<" ";
		min_heap.pop();
	}
	cout<<endl;

	return 0;
}