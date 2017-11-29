/* Program URL : https://leetcode.com/problems/4sum/description/ */
#include <iostream>
#include <vector>
using namespace std;

int main(){

	vector<int> nums;
	vector< vector<int> > res;

	nums.push_back(-2);
	nums.push_back(-1);
	nums.push_back(0);
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(2);

	sort(nums.begin(), nums.end());

	int len = nums.size(), target = 0, i, j, target2, target3;

	for(i = 0; i < nums.size(); i++){

		target3 = target - nums[i];

		for(j = i + 1; j < nums.size(); j++){

			target2 = target3 - nums[j];

			int front = j + 1;
			int back = nums.size() - 1;

			while(front < back){

				int twosum = nums[front] + nums[back];
				

				if(twosum < target2) front++;

				else if(twosum > target2) back--;
	
				else{

					vector<int>quad(4, 0);

					quad[0] = nums[i];
					quad[1] = nums[j];
					quad[2] = nums[front];
					quad[3] = nums[back];

					res.push_back(quad);

					while (front < back && nums[front] == quad[2]) ++front;
                    
                    while (front < back && nums[back] == quad[3]) --back;
				}
			}
		}
	}

	
	cout << "size is " << res.size() << endl;

	for(i = 0; i < res.size(); i++){
		for(j = 0; j < res[i].size(); j++)
			cout << res[i][j] << " ";
		cout << endl;
	}

}