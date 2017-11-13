/* Program URL : https://leetcode.com/problems/rotate-function/description/ */

#include <iostream>
#include <vector>
using namespace std;


int main(){
	vector <int> nums, sum_vec;
	nums.push_back(4);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(6);
	// nums.push_back(-2147483648);
	// nums.push_back(-2147483648);

	int len = nums.size(), j = 0, sum = 0, prev_sum; 

	for(int i = 0; i < len; i++){
		for(int k = 0; k < len; k++){
			sum += nums[k] * k;
		}
		cout << "sum = " << sum << endl;
		if(i == 0)
			prev_sum = sum;
		else{
			if(prev_sum >= sum)
				sum = prev_sum;
		}
		
		rotate(nums.begin(), nums.begin()+len-1, nums.end());
		prev_sum = sum;
		cout << "prev sum = " << prev_sum << endl;
		sum = 0;
		
	}

	cout << "Maximum sum : " << prev_sum << endl;

	for(int i = 0; i < sum_vec.size(); i++)
		cout << sum_vec[i] << " ";
}
