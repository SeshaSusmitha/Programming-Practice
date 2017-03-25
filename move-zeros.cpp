#include <iostream>
#include <vector>
using namespace std;

void movezeres(vector<int> nums);
int main()
{
	vector <int> nums;
	nums.push_back(0);
	nums.push_back(1);
	nums.push_back(0);
	nums.push_back(0);	
	nums.push_back(3);
	nums.push_back(12);
	nums.push_back(0);
	nums.push_back(8);

	movezeres(nums);
}

void movezeres(vector<int>nums)
{
	int j = 0,i = 0,temp;
	int length = nums.size();
	while(i < length-1)
	{
		if(nums[i] == 0)
		{
			while((nums[i+1] == 0) && (i+2) < length)
			{
				i = i + 1;
			}
			temp = nums[j];
			nums[j] = nums[i+1] ;
			nums[i+1] = temp;
			i++;
		}
		else
			i++;
		j = j+1;
	}
	for(int i = 0; i< nums.size(); i++)
	{
		cout<<nums[i]<<" ";
	}
	cout<<endl;
}

