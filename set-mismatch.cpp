/* program URL : https://leetcode.com/problems/set-mismatch/description/ */

#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
	vector<int> nums, res_vec;
	
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(2);
	nums.push_back(4);

	map <int, int> myMap;

	int len = nums.size(), i, c, a, b;

	for(auto &c : nums)
		myMap[c]++;

	for(i = 1 ; i <= len; i++){
		if(myMap[i] == 0)
			a = i;
		if( myMap[i] == 2)
			b = i;
	}
	res_vec.push_back(b);
	res_vec.push_back(a);
	cout << "Result Vector" << endl;
	for(i = 0; i < res_vec.size(); i++)
		cout << res_vec[i] << " ";

	cout << endl;
}