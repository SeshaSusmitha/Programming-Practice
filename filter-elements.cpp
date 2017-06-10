/*https://www.hackerrank.com/challenges/filter-elements?utm_campaign=challenge-
recommendation&utm_medium=email&utm_source=22-day-campaign */

#include <iostream>
#include <map>
#include <vector>
#include <set>
using namespace std;

int main()
{
	vector <int> nums, result;
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(2);
	nums.push_back(5);
	nums.push_back(4);
	nums.push_back(3);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(4);

	int k = 2, i;

	map<int,int> myMap;

	for(auto &c : nums)
		myMap[c]++;

	for(i = 0; i < nums.size(); i++)
	{
		if(myMap[nums[i]] >= k)
			result.push_back(nums[i]);
	}

	set <int> s(result.begin(), result.end());
	result.assign(s.begin(), s.end());

	for(i = 0; i < result.size();  i++)
		cout << result[i] << " ";
}