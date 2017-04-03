/******************************************************************************
Program URL : https://leetcode.com/problems/third-maximum-number/#/description
*******************************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int thirdmax(vector<int>nums);
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
	int result = thirdmax(nums);
	cout<<"Third maximum element of the given list is  "<<result<<endl;
}

int thirdmax(vector<int>nums)
{
	int len = nums.size();
	int third_max = nums[0];
	int count = 0;
	sort(nums.begin(),nums.end());
	int pos = 0;

    // int new_length = 1;
    // for(int i = 1; i < nums.size(); i++){
    //     if(nums[i] != nums[i-1])
    //         nums[new_length++] = nums[i];
    // }
    // len =  new_length;

    for(int i = 1; i < len; i++)
    {
    	if(nums[i] == nums[i-1]) count++;
    	else nums[i-count] = nums[i];
	}
	len =  len - count;
    if(len < 3)
    	return nums[len-1];
    else
		return nums[len-3];
}
