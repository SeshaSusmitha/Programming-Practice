#include <iostream>
using namespace std;
string reverse(string s);
int main(){
	cout << reverse("susmita") << endl;
}

string reverse(string s){
	if(s.length() == 1)
		return s;
	return reverse(s.substr(1, s.length()-1)) + s[0];
	// return s[s.length()-1] + reverse(s.substr(0, s.length()-1));
}