/* Program URL : http://www.ardendertat.com/2011/09/24/programming-
interview-questions-3-largest-continuous-sum/ */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector <int> nums;
	nums.push_back(5);
	nums.push_back(-1);
	nums.push_back(8);
	nums.push_back(9);
	nums.push_back(6);
	nums.push_back(-2);
	nums.push_back(-3);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(18);

	// nums.push_back(1);
	// nums.push_back(2);
	// nums.push_back(3);
	// nums.push_back(4);
	// nums.push_back(-6);
	// nums.push_back(7);
	// nums.push_back(7);
	// nums.push_back(7);
	int sum = 0, max = 0;
	int i = 0, length = nums.size();
	while(i < length)
	{
		if(nums[i] < 0)
		{
			if(max < sum)
			{
				max = sum;
				sum = 0;
			}
		}
		else
			sum = sum + nums[i];
		i++;
	}
	if(max < sum)
		max = sum;

	cout << "max sum = " << max << endl;
	



}