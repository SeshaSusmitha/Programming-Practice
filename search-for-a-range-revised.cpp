/***************************************************************************
Program URL : https://leetcode.com/problems/search-for-a-range/#/description
***************************************************************************/

#include <iostream>
#include <vector>
using namespace std;


vector <int> searchRange(vector<int>nums, int l, int r, int n);

int main()
{
	vector <int> nums, result;
	int n, len;
	nums.push_back(5);
	nums.push_back(7);
	nums.push_back(7);
	nums.push_back(8);
	nums.push_back(8);
	nums.push_back(8);
	nums.push_back(10);

	// nums.push_back(2);
	// nums.push_back(2);

	cout << "Enter n : " << endl;
	cin >> n;

	len = nums.size();
	result = searchRange(nums, 0, len-1, n);
	
	for(int i = 0; i < result.size(); i++)
			cout << result[i] << endl;
}

vector <int> searchRange(vector<int>nums, int left, int right, int n)
{
	vector <int> result;
	int a, b;
	while(left <= right)
	{
		int mid = (left + right) / 2;
		vector<int> result;
		int x, y, i;

		if(nums[mid] == n)
		{
			x = mid;
			y = mid;
			while(x >= 0)
			{
				if(nums[x] == n)
				{
					a = x;
					x--;
				}
				else
					break;
			}
			while(y < nums.size())
			{
				if(nums[y] == n)
				{
					b = y;
					y++;
				}
				else
					break;
			}
			
			break;

		}
		else if(nums[mid] > n)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}

		
		
	}
	if((a >= 0) && (b < nums.size()))
	{
		result.push_back(a);
		result.push_back(b);
	}
	else
	{
		result.push_back(-1);
		result.push_back(-1);
	}

	return result;
		
}