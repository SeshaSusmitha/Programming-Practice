#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int num;
	// unsigned int n = num;
	// int k = INT_MAX;

	cin>>num;

	// int i= 1;
	// while(num >= i)
	// {
	// 	num = num ^ i;
	// 	i <<= 1;
	// }
	// cout<<num<<endl;



	cout<< pow(2.0,floor(log2(num))+1)-1-num<<endl;
}