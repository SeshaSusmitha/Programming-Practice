/***********************************************************************
Program URL: https://leetcode.com/problems/valid-anagram/#/description
***********************************************************************/

#include <iostream>
#include <algorithm>
using namespace std;

bool validAnagram(string s, string t);
int main()
{
	string s = "anagram";
	string t = "nagaram";
	bool flag = validAnagram(s,t);
	cout<<s[1] - 'a'<<endl;
	if(flag)
		cout<<"Valid anagram"<<endl;
	else
		cout<<"Not anagram"<<endl;
}

bool validAnagram(string s, string t)
{

	/* Initialize each value to 0. Array size is 26, since there will be 26 characters*/
	int count[26] = {0};
	int s_len = s.length();

	/* If lengths of strings vary, t is not an anagram of s */

	if(s.length() != t.length())
	{
		return false;
	}
	
	/* Increment count of each character of string s */
	/* Decrement count of each character of string t */
	/* If t is anagaram of s, count becomes 0 for each character */
	for(int i = 0; i < s_len; i++)
	{
		count[s[i] - 'a']++;
		count[t[i] - 'a']--;
	}

	for(int i = 0; i < 26; i++)
	{
		if(count[i])
			return false;
	}
	return true;


	
}