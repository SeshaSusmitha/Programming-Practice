/* Program URL : */


#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	vector<int> nums, res_vec;
	
	nums.push_back(7);
	nums.push_back(1);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(6);
	nums.push_back(4);
	int len = nums.size(), val, prev_val, max = -99999;
	for(int i = 0; i < len; i++){
		for(int j = i + 1; j < len; j++){
			val = nums[j] - nums[i];
			cout << " val  " << val << " ";
			max = (val > max) ? val : max;
			//prev_val = val;
		}
	}

	cout << endl << "max = " << max << endl;

}