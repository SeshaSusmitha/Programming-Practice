/* Program URL : https://leetcode.com/problems/reverse-vowels-of-a-string/#/description */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string s = "leetcode";
	string vowels = "aeiou";
	vector<char> vec;
	char c, temp;
	int i;
	int length = s.length();
	while(i < length)
	{
		c = s[i];
		if(vowels.find(c)!= string::npos)
		{
			vec.push_back(s[i]);
			i++;
		}
		else
			i++;
	}
	for(i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";
	i = 0;
	cout << "last = " << vec.back();
	while(i < length)
	{
		c = s[i];
		if(vowels.find(c)!= string::npos)
		{
			temp = vec.back();
			vec.pop_back();
			s[i] = temp;
			i++;
		}
		else
			i++;
	}
	cout << "new s : " << s << endl;
}