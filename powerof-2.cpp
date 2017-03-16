/* Program URL : https://leetcode.com/problems/power-of-two/#/description */

#include <iostream>
#include <math.h>
using namespace std;
bool find_powerof2(int n);
int main()
{
	int n;
	bool result;
	cout<<"Enter n: "<<endl;
	cin>>n;
	result = find_powerof2(n);
	if(result)
		cout<<"power of 2"<<endl;
	else
		cout<<"not a power of 2"<<endl;
}

bool find_powerof2(int n)
{	
	double val = log2(n);
	int v = val;
	cout<<"v = "<<v<<endl;
	if(v == val)
		return true;
	else
		return false;
	//cout<<val<<endl;

}

/* In efficient solution */

bool power_two(int n)
{

	int val;
	while(true)
	{
		val = n%2;
		if(val != 0)
			return false;
		n = n/2;
		if(n == 1)
		{
			return true;
		}
		
    }
}