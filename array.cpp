#include <bits/stdc++.h>
using namespace std;

// Array to Function
// Array is passed by reference
void updateArray(int arr[], int idx, int val){
	arr[idx] = val;
}

int main(){	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int arr[] = {1,2,3,4,5};

	// actual array is updated
	updateArray(arr, 1, 13);
	
	int n = sizeof(arr)/sizeof(int);

	for(int i = 0; i < n; i++){
		cout<< arr[i] << " ";
	} 

}