/**********************************************************************
https://leetcode.com/problems/sort-colors/#/description
***********************************************************************/

#include <iostream>
#include <vector>
using namespace std;

void sortColors(vector<int>nums);
void merge_array(vector<int>left, vector<int>mid, vector<int>right, vector<int>nums);

int main()
{
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(2);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	sortColors(nums);
}

/* This method pushes all 0s into left array, 1s into mid array and 2s into right array*/

void sortColors(vector<int>nums)
{
	vector<int>left;
	vector<int>mid;
	vector<int>right;
	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i] == 0)
			left.push_back(nums[i]);
		else if(nums[i] == 1)
			mid.push_back(nums[i]);
		else
			right.push_back(nums[i]);
	}
	merge_array(left,mid,right,nums);
}

/*Method to merge 3 subarrays*/

void merge_array(vector<int>left, vector<int>mid, vector<int>right, vector<int>nums)
{

	nums.clear();
	for(int i = 0; i < left.size(); i++)
		nums.push_back(left[i]);
	for(int i = 0; i < mid.size(); i++)
		nums.push_back(mid[i]);
	for(int i = 0; i < right.size(); i++)
		nums.push_back(right[i]);

	for(int i = 0; i < nums.size(); i++)
		cout<<nums[i]<<" ";

	cout<<endl;
}








