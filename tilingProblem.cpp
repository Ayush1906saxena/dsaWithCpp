#include <bits/stdc++.h>
using namespace std;
int tiles(int n){
	if(n <= 3) return 1;

	/*
		f(n-1) if a 4x1 tile is placed vertically and rest of the place is left
		f(n-4) if 4 1x4 tiles are placed horizontally convering 4 spaces in n. so n-4 left
	*/
	return tiles(n-4) + tiles(n-1);
}
int main(){
	cout<<tiles(5);
}