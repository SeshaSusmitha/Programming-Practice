#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> threeSum(vector<int>&nums,  int target);
int main()
{
	vector <int> nums, result;
	vector <int> numbers2;
	nums.push_back(2);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(1);
	nums.push_back(3);
	int target = 10;
	result = threeSum(nums, target);
	for(int i = 0;  i < result.size(); i++)
	{
		cout<<result[i]<<" ";
	}
}

vector<int> threeSum(vector<int>&nums, int target){

	vector<int> result;
	unordered_map<int, int> myMap;
	int len = nums.size();

	for(int i = 0; i < len; i++){
		int numToFind = target - nums[i];


		for(int j = i + 1; j < len; j++){
			int valToFind = numToFind - nums[j];

			if(myMap.find(valToFind) != myMap.end()){
				result.push_back(myMap[valToFind] + 1);
				result.push_back(i + 1);
				result.push_back(j + 1);
				return result;
			}

		}
		myMap[nums[i]] = i;

	}
}