#include <bits/stdc++.h>
using namespace std;

int power(int a, int n){
	if(n == 0) return 1;

	int half = power(a, n>>1);
	return (n&1) ? a * half * half : half * half;
}
int main(){
	cout<<power(3,4)<<endl;
}