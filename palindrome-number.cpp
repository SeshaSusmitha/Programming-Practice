/***************************************************************************
Program URL : https://leetcode.com/problems/palindrome-number/#/description
***************************************************************************/

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//int x = -123, a;
	int x = 12321;
	if((x < 0) || (x != 0 && x % 10 == 0))
	{
		cout << "not palindrome" << endl;
		return 0;
	}
	
	int n, count = 0;
	long res = 0;

	
	while(x > res)
	{
		res  = (res * 10) + x % 10;
		x /= 10;
	}

	if((x == res) || (x == res/10))
		cout << "palindrome" << endl;
	else
		cout << "not palindrome" << endl;

}