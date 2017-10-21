/* https://leetcode.com/problems/maximum-product-of-three-numbers/description/ */

#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int> nums;
	
	// nums.push_back(2);
	// nums.push_back(3);
	// nums.push_back(-2);
	// nums.push_back(-4);
	// nums.push_back(6);
	nums.push_back(-4);
	nums.push_back(-3);

	int max = nums[0], p1 = 1, i = 0, p2;

	int len = nums.size();
	if(len == 1){
		cout << nums[0] << endl;
		return 0;
	}

	while(i < len){
		cout << "nums [i] " << nums[i] << endl;
		p1 = p1 * nums[i];
		if(p1 > max){
			cout << "in p1 > max " << endl;
			max = p1;
			cout << "p1 in p1 > max is " << p1 << endl;
			cout << "mid max = " << max << endl;
		}
		else if ((p1 < 0) && (i+1 < len))
		{
			// i = i + 1;
			p2 = p1 * nums[i+1];

			if(p2 > max){
				max = p2;
				cout << "max in p2 > max is " << max << endl;
				p1 = p2;
				cout << "p1 in p2 > max is " << p1 << endl;
				i = i + 1;
			}
			else
				p1 = 1;
		}
		else if (p1 == 0)
			p1 = 1;
		
		i = i + 1;
	}
	cout << "Max = " << max << endl;


}