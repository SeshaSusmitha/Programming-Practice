/**** Program URL : https://leetcode.com/problems/valid-perfect-square/#/description ****/

#include <iostream>
using namespace std;

int main()
{
	int num, mid, ans;
	cout << "Enter n :" << endl;
	cin >> num;

	int start = 1, flag = 1;
	int end = min(num, 43631);
	 

	while(start <= end)
	{
		mid = (start + end)/2;
		if(mid * mid == num)
		{
			flag = 0;
			break ;
		}
		else if((mid * mid) < num)
		{
			start = mid + 1;
		}
		else if((mid * mid) > num)
		{
			end = mid - 1;
		}
	}
	if(flag == 0)
		cout << mid << endl;
	else
		cout << "no root" << endl;
}
