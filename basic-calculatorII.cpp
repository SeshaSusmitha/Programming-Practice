#include <iostream>
using namespace std;

int main(){
	string s = "3+2*2";

	stack<int> s1;
	stack<char>s2;
	int i, len = s.length();

	while(i < len){

		if(s[i] != ' ')
		{	
			if(isdigit(s[i])){
				s1.push(s[i]);
				i++;
			}
			else
				
		}

	}
}