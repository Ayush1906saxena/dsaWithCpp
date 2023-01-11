#include <bits/stdc++.h>
#define ayush
using namespace std;

void overlayNumber(char arr[], int number){
	int j = 0;
	while(number > 0){
		int last_bit = number & 1;
		if(last_bit)
			cout<<arr[j];

		j++;
		number = number >> 1;
	}
	cout<<endl;
}

void generateAllSubsequences(char arr[]){
	int n = strlen(arr);
	for(int i = 0; i < (1 << n); i++){
		overlayNumber(arr, i);
	}
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif

	char arr[] = "abc";
	generateAllSubsequences(arr);
}