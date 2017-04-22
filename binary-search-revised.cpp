/**************************************************************************************
*************************** Binary Search Implementataion *****************************/

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
	if(result > 0)
		cout<<"Element found at "<<result<<" position"<<endl;
		
	else
		cout<<"Element not found"<<endl;
		
	
}


int binarySearch(vector<int> nums, int ele, int first, int last)
{
	int mid = (first + last)/2;
	int index;
	while(first <= last)
	{
		if(ele == nums[mid])
			{
				index = mid;
				return mid;
			}
		else if(ele < nums[mid])
			last = mid-1;
		else
			first = mid+1;
		mid = (first + last)/2;
	}
	if(first > last)
		return -1;

}