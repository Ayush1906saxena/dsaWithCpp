#include <bits/stdc++.h>
using namespace std;

string addNumbers(string s1, string s2){
	if(s1.length() > s2.length()){
		swap(s1, s2);
	}

	string result = "";
	// reverse them first
	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());

	// now add digits upto n1.length()
	int carry = 0;
	for(int i = 0; i < s1.length(); i++){
		int d1 = s1[i] - '0';
		int d2 = s2[i] - '0';

		int sum = d1 + d2 + carry;
		result.push_back((sum % 10) + '0');
		carry = sum / 10;
	}

	// now putting all the remaining digits of the larger number
	for(int i = s1.length(); i < s2.length(); i++){
		int d1 = s2[i] - '0';
		int sum = d1 + carry;
		result.push_back((sum % 10) + '0');
		carry = sum / 10;
	}

	// also adding carry now
	if (carry){
		result.push_back(carry+'0');
	}

	// reversing our result
	reverse(result.begin(), result.end());

	return result;
}

int main(){
	
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif
	string s1, s2;
	cin>>s1>>s2;

	string result = addNumbers(s1, s2);
	cout<<result;
}