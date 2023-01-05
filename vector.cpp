#include <bits/stdc++.h>
#define ayush
using namespace std;

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	// Empty vector
	vector<int> first = {1,2,3,4,5};

	// Fill vector of size 4 with all values 20
	vector<int> second(4,20);

	// The reason why we can do this is
	// push_back is a constant-time operation but its capacity
	// doubles every time its capacity limit is reached
	// and that doubling is a linear operation, so why not just reserve enough memory in advance
	second.reserve(100);

	second.at(0);

	// Getting the size
	int n = second.size();

	// Adding an element
	second.push_back(10);

	// Deleting an element from back
	second.pop_back();

	// second.clear();

	second.erase(second.begin());
	for(int x : second){
		cout<<x<<" ";
	}
}