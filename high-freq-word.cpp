/*  Reverse words in a string */


#include <iostream>
#include <vector>
#include <numeric>
#include <string>
#include <map>
using namespace std;

int main()
{
	string s = "I am Susmitha am I is I is is is";
	cout << s << endl;
	string result, newstr;
	vector<string> str;
	int flag;
	int length = s.length();
	int i = 0, j, count = 0;
	int start = 0, end;
	map<string, int> myMap;


	while(i < length)
	{
		if((s[i] == ' ') || (s[i] == '\n'))
		{
			str.push_back(s.substr(start, count));

			i++;
			start = i;
			count = 0;
			flag = 0;
		}
		else
		{
			i++;
			count++;
			flag = 1;
			
		}
	}
	if(flag == 1)
	{
		str.push_back(s.substr(start, count));
	}

	// for(i = 0; i < str.size(); i++)
	// {
	// 	cout<<str[i]<<endl;
	// }

	for(auto &s : str)
	{
		myMap[s]++;
	}

	i = 1;
	int max = myMap[str[0]];
	// cout << "max = " << max << endl;

	while(i < str.size())
	{
		if(myMap[str[i]] > max)
		{
			max = myMap[str[i]];
			newstr = str[i];
		}
		i++;
	}

	cout << "max frequency = " << max << endl;
	cout << "high freq string = " << newstr << endl;

	
 }