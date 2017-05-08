/* 
http://www.ardendertat.com/2011/12/13/programming-interview
-questions-22-find-odd-occurring-element/ */


#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	vector <int> nums;
	map<int,int> myMap;
	int i = 0;

	nums.push_back(2);
	nums.push_back(5);
	nums.push_back(2);
	nums.push_back(8);
	nums.push_back(5);
	nums.push_back(1);
	nums.push_back(6);
	nums.push_back(1);
	nums.push_back(6);


	for( auto &i : nums)
		myMap[i]++;

	for(i = 0; i < nums.size(); i++)
	{
		if(myMap[nums[i]] % 2 == 1)
		{
			cout << "odd occuring element = " << nums[i];
			cout << endl;
			return 0;
		}
	}

	cout << "no ele found that occurs odd number of times" << endl;
}