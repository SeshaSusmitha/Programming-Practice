/* Program URL : https://leetcode.com/problems/find-all-duplicates-in-an-array/#/description */


#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
	vector<int> nums;
	vector<int> result;
	int i = 0;

	nums.push_back(5);
	nums.push_back(4);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(9);
	nums.push_back(3);
	nums.push_back(10);
	nums.push_back(9);
	nums.push_back(5);
	nums.push_back(6);

	int length = nums.size();

	for(i = 0; i < length; i++)
	{
		nums[abs(nums[i]) - 1] = -nums[abs(nums[i]) - 1];
		if(nums[abs(nums[i]) - 1] > 0)
		{
			result.push_back(abs(nums[i]));
		}
	}
	for(i = 0; i < result.size(); i++)
	{
		cout << result[i] << " ";
	}
	cout << endl;
}