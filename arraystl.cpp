#include <bits/stdc++.h>
#define ayush
using namespace std;

// All Stl containers are passed by value, but in order 
// to update we need to pass by reference, so we need a &
void updateArray(array<int, 6> &arr, int idx, int val){
	arr[idx] = val;
}

void printArray(array<int, 6> &arr){
	int n = arr.size();
	for(int i = 0; i < n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	array<int, 6> arr = {1,2,3,4,5,6};
	arr[0] = 10;
	updateArray(arr, 1, 15);
	printArray(arr);

	// sort the array
	cout<<"Sorting Array"<<endl;
	sort(arr.begin(), arr.end());
	printArray(arr);

	// fill array
	array<int, 10> fives;
	fives.fill(5);
	for(int i = 0; i < fives.size(); i++)
		cout<<fives[i]<<" ";
	cout<<endl;
	
	// for each loop
	for(int x : fives)
		cout<<x<<" ";
	cout<<endl;
}