#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	//int x = -123, a;
	int x = 1534236469, a;
	
	int n, count = 0;
	long res = 0;

	
	while(x )
	{
		//n = x % 10;

		res  = (res * 10) + x % 10;
		x /= 10;
	
		
		//res = n * pow(10, count) + res;
		
		cout << "n = " << n << endl;
		cout << "res = " << res << endl;
		

		//cout << "x = " << x << endl;
	}

	if(res > INT_MAX)
		cout << "overflow" << endl;
	else
		cout << "str = " << res << endl;
}