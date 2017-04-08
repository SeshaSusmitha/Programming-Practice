/*******************************************************************************
Program URL : https://leetcode.com/problems/contains-duplicate/#/description
*******************************************************************************/

#include <iostream>
#include <set>
#include <map>
#include <vector>
using namespace std;

bool containsDuplicate(vector<int>& nums);
int main()
{
	vector<int> nums;
	bool result;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(4);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(5);

	result = containsDuplicate(nums);
	if(result)
		cout<<"Dyplicate elements found"<<endl;
	else
		cout<<"No duplicates"<<endl;
}

bool containsDuplicate(vector<int>& nums)
{
	/* Method 1 : using maps */
	map<int,int> my_map;
	if(nums.size() == 0)
		return false;

	for (int i : nums)
	{
        if (++my_map[i] > 1)
        	return true;
    }
    return false;

    /* Method 2 : using set */

	//return nums.size() > set<int>(nums.begin(), nums.end()).size();

    //set<int> my_set(nums.begin(), nums.end());
	// set<int> :: iterator it; 
	// for(it = my_set.begin(); it != my_set.end(); it++)
	// cout<<*it<<" ";
	// cout<<endl;

	/* Method 3 : Sorting the vector and check if adjacent elements are equal */

	sort(nums.begin(), nums.end());
	int length = nums.size();
	for(int i = 0; i < length; i++)
	{
		if(nums[i] == nums[i+1])
		{
			return true;
		}
	}
	return false;


}