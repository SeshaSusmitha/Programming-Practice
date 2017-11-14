#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> nums, ans, window_vec;

	nums.push_back(1);
	nums.push_back(3);
	nums.push_back(-1);
	nums.push_back(-3);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(6);
	nums.push_back(7);
	int i, j, k = 3, l = 0, len = nums.size(), max;

	cout << "hi" << endl;

	while(i <= len-k){

		j = l;
		max = nums[j];
		while(j < k+l){
			if(nums[j] > max){
				max = nums[j];
			}
			j++;
		}
		cout << endl;
		l++;

		ans.push_back(max);


		i++;
	}

	for(i = 0; i < ans.size(); i++)
		cout << ans[i] << " ";
}
