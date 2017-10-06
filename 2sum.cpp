/* Program URL : https://leetcode.com/problems/two-sum/description/ */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	vector <int> nums;
	nums.push_back(2);
	nums.push_back(7);
	nums.push_back(11);
	nums.push_back(15);
	vector <int> result;
	int target = 9, flag = 1;
	map<int, int>map1;
	for(int i = 0; i < nums.size(); i++)
	{
		int diff = target - nums[i];
		if(map1.find(diff) != map1.end())
		{
			result.push_back(map1[diff] + 1);
			result.push_back(i + 1);
			flag  = 0;
		}
		map1[nums[i]] = i;
	}

	if(flag == 1){
		cout << "Not found" << endl;
		return false;
	}

	cout << "found" << endl;
	for(int i = 0; i < result.size(); i++)
	{
		cout<<result[i]<<" ";
		cout << endl;
	}
}