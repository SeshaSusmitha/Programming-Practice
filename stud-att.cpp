/* Program URL : https://leetcode.com/problems/student-attendance-record-i/description/ */


#include <iostream>
using namespace std;

int main(){
	// string s = "PPALLLP";
	// string s = "LPLPLPLPLPLL";
	// string s = "PPALLL";
	// string s = "LLPPPLL";
	// string s = "LLLALL";
	string s = "ALLAPPL";

	int len = s.length(), count1 = 0, count2 = 0, flag = 0;
	cout << "len = " << len << endl;

	for(int i = 0; i < len; i++){
		if(s[i] == 'A') count1++;
		if(s[i] == 'L') count2++;
		else count2 = 0;
		if(count1 >= 2 || count2 > 2){
			flag = 1;
			break;
		}
		
		
	}
	if(flag == 1)
		cout << "false" << endl;
	else
		cout << "true" << endl;
}