#include <bits/stdc++.h>
#define ayush
using namespace std;

bool powerOf4(int n){
	n = (n >> 1); //divide it by 2
	return (n & (n-1)) == 0; //now check if result is a power of 2 or not
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

}

