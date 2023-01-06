#include <bits/stdc++.h>
#define ayush
using namespace std;

int getIthBit(int n, int i){
	int mask = (1 << i);
	return (n & mask) > 0 ? 1 : 0;
}

void setIthBit(int n, int i){
	int mask = (1 << i);
	n = n | mask;
}

void clearIthBit(int n, int i){
	int mask = ~(1 << i);
	n = n & mask;
}

void updateIthBit(int &n, int i, int v){
	clearIthBit(n, i);
	int mask = (v << i);
	n = n | mask;
}

void clearLastIBits(int &n, int i){
	int mask = (-1 << i);
	n = n & mask; 
}

void clearBitsInRange(int &n, int i, int j){
	int a = ((~0) << (j+1)); //111100000000,           ~0 = 111111111111111
	int b = (1 << i) - 1;	 //000000000111
	int mask = (a | b);		 //111100000111, hence these middle bits are now cleared
	n = (n & mask);
}

void replaceBits(int &n, int m, int i, int j){
	clearBitsInRange(n, i, j);
	int mask = m << i;
	n = n | mask;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	int i,n;
	cin >> n;
	cin >> i;

	cout<<getIthBit(n, i)<<endl;
}