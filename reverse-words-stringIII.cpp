/* Program URL : https://leetcode.com/problems/reverse-words-in-a-string-iii/description/ */

#include <iostream>
#include <stack>
using namespace std;


int main(){
	string str = "Let\"s take the leetcode contest";
	string new_str = "";
	int len = str.length();
	stack<char>wordStack;

	for (int i= 0; i < len; i++) {
		if(str[i] != ' '){
			wordStack.push(str[i]);
		}	
		else{
			while(!wordStack.empty()){
				new_str += wordStack.top();
				wordStack.pop();
			}
			new_str += ' ';
		}
	}
	while(!wordStack.empty()){
				new_str += wordStack.top();
				wordStack.pop();
			}


	cout << "new string : " << new_str << endl;
}
