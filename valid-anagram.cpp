/***********************************************************************
Program URL: https://leetcode.com/problems/valid-anagram/#/description
***********************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s = "anagram";
	string t = "nagaram";
	sort(t.begin(),t.end());
	sort(s.begin(),s.end());
	bool flag;
	if(s == t)
		flag = true;
	else
		flag = false;
	if(flag)
		cout<<"anagram"<<endl;
	else
		cout<<"not anagram"<<endl;
}