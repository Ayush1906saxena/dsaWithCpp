#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
#endif	
	
	unordered_map<string, int> menu;
	menu["maggi"] = 15;
	menu["cold drink"] = 50;
	menu["dosa"] = 100;
	menu["pizza"] = 250;
	menu["burger"] = 150;
	menu["kebab"] = 50;

	// updating an element
	menu["dosa"] = (1.1) * menu["dosa"];

	string item;
	cin >> item;

	// searching an element
	if(menu.count(item) == 1)
			cout<<"Price of this item is "<<menu[item]<<endl;
	else cout<<"Item not available"<<endl;

	// iterate over the entire unordered_map
	for(pair<string, int> item: menu){
		cout<<"The price of "<<item.first<<" is "<<item.second<<" INR"<<endl;
	}

	// deleting an element
	menu.erase("dosa");


	/*
		Making a phonebook
	*/
	unordered_map<string, list<string>> phonebook;
	phonebook["ayush"].push_back("+916388648538");
	phonebook["ayush"].push_back("+918318156219");

	for(pair<string, list<string>> person : phonebook){
		cout<<"Phone numbers of "<<person.first<<" are ...."<<endl;
		for(string number: person.second){
			cout<<number<<" ";
		}
		cout<<endl;
	}
}