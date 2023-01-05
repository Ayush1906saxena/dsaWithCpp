#include "iostream"
#include <stack>
using namespace std;

int main(){
	stack<string> books;
	books.push("c++");
	books.push("java");
	books.push("python");

	while(!books.empty()){
		cout<<books.top()<<" ";
		books.pop();
	}
}