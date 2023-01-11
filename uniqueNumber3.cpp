#include <bits/stdc++.h>
#define ayush
using namespace std;

void updateSum(vector<int> &arr, int x){
	for(int i = 0; i < 32; i++){
		int bit = x & (1 << i);
		if(bit)
			arr[i]++;
	}
}

int numFromBits(vector<int> arr){
	int res = 0;
	for(int i = 0; i < 32; i++){
		res += (arr[i] * (1 << i));
	}
	return res;
}

int uniqueNumber3(vector<int> arr){
	vector<int> sumArr(32, 0);

	for(int i : arr){
		updateSum(sumArr, i);
	}

	for(int i = 0; i < 32; i++)
		sumArr[i] = sumArr[i] % 3;

	// array contains the binary representation of our result
	return numFromBits(sumArr);
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	/*
		Every number is present thrice except one.
		arr = {5, 2, 5, 3, 5, 2, 2}

		5	=	1	0	1
		2	=	0	1	0
		5	=	1	0	1
		3	=	0	1	1
		5	=	1	0	1
		2	=	0	1	0
		2	=	0	1	0
		sum =	3	4	4 (sum of set bits in each column)

		sum = 3n, if unique number does not have a set bit at that position
		sum = 3n + 1, if unique number do have a set bit at that position

		so just do %3 on each column sum and we will get a binary representation of our number
		011. just convert it to decimal now
	*/

	vector<int> arr = {5, 2, 5, 3, 5, 2, 2};
	cout<<uniqueNumber3(arr)<<endl;
}