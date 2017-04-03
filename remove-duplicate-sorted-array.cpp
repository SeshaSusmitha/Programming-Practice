/********************************************************************************************
Program URL: https://leetcode.com/problems/remove-duplicates-from-sorted-array/#/description
*********************************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
int removeDuplicates(vector<int>& nums);
int main()
{
	vector<int>nums;
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(3);
	int result = removeDuplicates(nums);
	cout<<"New length of list is "<<result<<endl;
}


int removeDuplicates(vector<int>& nums)
{
	sort(nums.begin(),nums.end());
        
    int length = nums.size();
    int count = 0;
    for(int i = 1; i < length; i++)
    {
        if(nums[i] == nums[i-1])
            count++;
        else
            nums[i - count] = nums[i];
    }
     
    return length - count;
        
}