#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
	string s = "abcd";
	string t = "abcde";
	string str1, str2;
	unordered_map<char, int> myMap;
	int slen, tlen;

	slen = s.length();
	tlen = t.length();
	if(abs(slen - tlen) > 1){
		cout << "invalid strings" << endl;
		return 0;
	}

	if(slen > tlen){
		str1 = s;
		str2 = t;
	}
	else{
		str1 = t;
		str2 = s;
	}

	for(char &c : str1)
		myMap[c]++;

	for(char &d : str2)
		myMap[d]--;

	for(char &c : str1)
		if(myMap[c] != 0)
			cout << c << endl;


}