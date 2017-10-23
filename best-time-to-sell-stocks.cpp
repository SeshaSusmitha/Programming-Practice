/* Program URL : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/ */


#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	vector<int> nums;
	
	nums.push_back(7);
	nums.push_back(1);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(6);
	nums.push_back(4);
	int len = nums.size(), ret = 0, max = 0;
	for(int i = 1; i < len; i++){
		ret = ret + nums[i] - nums[i-1];
		if(ret < 0)
			ret = 0;
		if(ret > max)
			max = ret;
	}

	cout << "max = " << max << endl;

}