/* https://leetcode.com/problems/maximum-product-of-three-numbers/description/ */

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> nums;
	
	nums.push_back(-4);
	nums.push_back(-3);
	nums.push_back(-2);
	nums.push_back(-1);
	nums.push_back(60);

	sort(nums.begin(), nums.end());
	int len = nums.size();
	int a = nums[len-1] * nums[len-2] * nums[len-3];
	int b = nums[len-1] * nums[0] * nums[1];
	if(a > b)
		cout << a << endl;
	else
		cout << b << endl;


}