/* Program URL : http://www.ardendertat.com/2012/01/06/programming-interview-
questions-25-remove-duplicate-characters-in-string/ */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	//string str = "sesha susmitha yellamraju";
	string str = " tree traversal";
	map<char, int> myMap;
	string newstr;

	for( auto &c : str)
	{
		myMap[c]++;
		if(myMap[c] == 1)
		{
			newstr += c;		
		}
	}
	
	cout << "new str = " << newstr << endl;
}