#include <iostream>
using namespace std;

int main(){
	// string s = "abcdef";
	string s = "a123";
	int len = s.length(), i;
	cout << "length = " << len << endl;

	while(i < len){
		if(!isdigit(s[i])){
			cout << "not a number" << endl;
			return false;
		}
		else
			i++;
	}

	cout << "Number" << endl;
}
