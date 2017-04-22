/**************************************************************************************
**************** Program to delete all instances of a given element *******************
******* Program URL : https://leetcode.com/problems/remove-element/#/description ******/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int removeElement(vector<int> nums, int ele);
int main()
{
	vector<int> nums;
	int ele;
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(3);
	cout<<"Enter element to delete: "<<endl;
	cin>>ele;
	cout<<removeElement(nums, ele);
}


int removeElement(vector<int> nums, int ele)
{
	//sort(nums.begin(), nums.end());
	int count = 0;
	for(int i = 0; i < nums.size(); i++)
	{
		if(nums[i] == ele)
		{
			nums.erase(nums.begin()+i);
			i--;
		}
	}
	for(int i = 0; i < nums.size(); i++)
	{
		count++;
	}

	return count;

}