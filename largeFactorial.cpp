#include <bits/stdc++.h>

#define int long long int
#define F first
#define S second
#define pb push_back

void multiply(vector<int> &a, int no, int &size){

	int carry = 0;
	for(int i=0; i < size; i++){

		int product = a[i] * no + carry;
		a[i] = product % 10;
		carry = product / 10;
	}

	//to handle the carry
	while(carry){
		a[size] = carry % 10;
		carry = carry/10;
		size = size + 1;	
	}

}


void bigFactorial(int n){

	vector<int> a(1000,0);
	a[0] = 1;
	int size = 1;

	for(int i=2; i<=n; i++){
		multiply(a,i,size);
	}

	// Print the Result in the Reverse Order
	// size - 1 to 0 
	for(int i = size - 1; i >=0 ; i--){
		cout << a[i];
	}
	cout <<endl;

}

using namespace std;

int32_t main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	

	return 0;
}