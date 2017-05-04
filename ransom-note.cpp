/* Program URL : https://leetcode.com/problems/ransom-note/#/description */

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
	string ransomNote = "aa";
	//string ransomNote = "fihjjjjei";
	//string magazine = "hjibagacbhadfaefdjaeaebgi";
	//string ransomNote = "fffbfg";
	map <char,int> map1;
	map <char, int> map2;
	int flag;
	string magazine = "aab";
	//string magazine = "effjfggbffjdgbjjhhdegh";

	for(auto &c : magazine)
		map1[c]++;
	for(auto &d : ransomNote)
		map2[d]++;
	for(auto &c : ransomNote)
	{
		if(map1[c] >= map2[c])
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}

	if(flag == 1)
		cout << "true" << endl;
	else
		cout << "false" << endl;

}