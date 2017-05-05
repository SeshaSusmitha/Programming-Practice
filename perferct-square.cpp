/**** Program URL : https://leetcode.com/problems/valid-perfect-square/#/description ****/

#include <iostream>
using namespace std;

int main()
{
	int n, flag, a;
	cout << "Enter n :" << endl;
	cin >> n;
	for(a = 0; a < n; a++)
	{
		if(n == a * a)
		{
			flag = 0;
			break;
		}
		else
			flag = 1;
	}
	if(flag == 0)
		cout << a << " is the square root" <<endl;
	else
		cout << "no square root " << endl;
}