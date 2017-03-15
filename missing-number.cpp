/* Problem URL : https://leetcode.com/problems/missing-number/#/description */

#include <iostream>
#include <vector>
using namespace std;
int find_missing(vector<int>);
int main()
{
	vector<int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(6);
	nums.push_back(7);
	int num = find_missing(nums);
	cout<<"missing number = "<<num<<endl;;
	
}

int find_missing(vector<int>nums)
{
	int n = nums.size();
    int total,sum = 0;
    for(int i = 0; i < n; i++)
    {
        sum = sum + nums[i];
    }

    /* SUm of 1st n natural number = (n)*(n+1)/2 */
    
    total = (n *(n+1)/2);
    return total-sum;


}


