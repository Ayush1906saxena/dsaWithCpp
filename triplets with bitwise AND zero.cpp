#include <bits/stdc++.h>
#define ayush
using namespace std;

int countTriplets(vector<int> nums) {
    unordered_map<int, int> map;
    
    for(int i : nums){
    	for(int j : nums){
    		int val = (i & j);
    		map[val]++;
    	}
    }

    int res = 0;
    for(int i : nums){
    	for(auto itr : map){
    		if((itr.first & i) == 0)
    			res += itr.second;
    	}
    }

    return res;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	cout<<(14 & 13 & 12 & 11 & 10 & 9 & 8 & 7);
}

/*		168421
	16 = 10000
	15 = 01111
	14 = 01110
	13 = 01101
	12 = 01100
	11 = 01011
	10 = 01010
	9  = 01001
	8  = 01000
	7  = 00111
	6  = 00110
	5  = 00101
*/