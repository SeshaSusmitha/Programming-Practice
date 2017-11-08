#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main()
{
	vector <int> nums;
	unordered_map <int, int> myMap;
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(3);
	nums.push_back(2);
	nums.push_back(9);
	nums.push_back(3);
	nums.push_back(9);
	nums.push_back(8);

	for(auto &c : nums){
		myMap[c]++;
	}

	for(int i = 0; i < nums.size(); i++){
		if(myMap[nums[i]] == 1){
			cout << nums[i] << endl;
		}
	}
}