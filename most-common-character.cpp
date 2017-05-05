/* Most common character of a given string */

#include <iostream>
#include <map>
using namespace std;

int main()
{
	string str = "seshasusmithayellamraju";
	map<char,int> myMap;
	int i;
	char ch;

	for(auto &c : str)
		myMap[c]++;

	int max = myMap[str[0]];
	// cout << "maximum = " << max << endl;
	ch = str[0];

	for(i = 1; i < str.size(); i++)
	{
		if(myMap[str[i]] > max)
		{
			max = myMap[str[i]];
			ch = str[i];
		}
		
	}

	cout << "most freq character of the string = " << ch << endl;

}
