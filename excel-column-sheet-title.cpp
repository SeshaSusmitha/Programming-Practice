/**************************************************
https://leetcode.com/problems/excel-sheet-column-title/#/description
********************************************************/

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int x;
	string result;
	while(n > 0)
	{
		x = n % 26;
		if(x == 0)
		{
			result.push_back('z');
			n = (n/26) - 1;
		}
		else
		{
			x = floor(x);
			result.push_back(65 + x -1);
			n = n / 26;
		}
	}
	
	n = result.length();
    for (int i = 0; i < n/2; i++)
       swap(result[i], result[n-i-1]);
	cout<<"result = "<<result<<endl;
}