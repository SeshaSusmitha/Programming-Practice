/**************************************************************************************
**************** Program to delete all instances of a given element *******************
******* Program URL : https://leetcode.com/problems/remove-element/#/description ******/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int binarySearch(vector<int> nums, int ele, int first, int last);
int main()
{
	vector<int> nums;
	int ele, first, last, result;
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(8);
	cout<<"Enter element to search: "<<endl;
	cin >> ele;
	first = 0;
	last = nums.size();
	result = binarySearch(nums, ele, first, last);
	cout<<"Element found at "<<result<<" position"<<endl;
	
}


int binarySearch(vector<int> nums, int ele, int first, int last)
{
	int mid = (first + last)/2;
	int index;

	if(ele == nums[mid])
		index = mid;
	else if(ele < nums[mid])
		index = binarySearch(nums, ele, first, mid-1);
	else
		index = binarySearch(nums, ele, mid+1, last);
	return index;

}