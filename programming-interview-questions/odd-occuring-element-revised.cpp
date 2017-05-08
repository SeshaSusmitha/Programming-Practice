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
	int result;
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


	for(i = 0; i < nums.size(); i++)
	{
		result = result ^ nums[i];
	}
	
	if(result != 0)
		cout << "result = " << result << endl;
	else
		cout << "No element found with odd occurence" << endl;

	
}