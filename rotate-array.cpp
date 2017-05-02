/*********************************************************************
Program URL : https://leetcode.com/problems/rotate-array/#/description
***********************************************************************/


#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> nums;
	int k, i = 1;

	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);

	cout << "Enter k: " << endl;
	cin >> k;

	cout << nums.size() << endl;
	int p = nums.size() -1;

	

	while(i < k+1)
	{
		nums.insert(nums.begin(), nums[p]);
		nums.pop_back();
		i++;
	}

	for(i = 0 ; i < nums.size(); i++)
		cout << nums[i] << " ";



}

