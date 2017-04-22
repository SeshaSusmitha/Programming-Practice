#include <iostream>
#include <vector>
using namespace std;

int find_insertposition(vector<int>, int, int, int);

int main()
{
	vector<int>nums;
	nums.push_back(1);
	nums.push_back(3);
	 nums.push_back(5);
	 nums.push_back(6);
	int len = nums.size() - 1;
	int target = 4;
	int result = find_insertposition(nums, 0, len, target);
	cout<<"result: "<<result<<endl;
}


int find_insertposition(vector<int>nums, int l, int len, int target)
{
	int low = 0, high = len;
	int index, mid;
	while(low <= high)
	{
		mid = (low + high)/2;
		
		if(target < nums[mid])
			high = mid-1;
		else
			low = mid+1;
		
	}
	return low;
	
}