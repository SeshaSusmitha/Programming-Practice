#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a;
	cin>>b;
	int sum;
	// cout<<a||b;
	// cout<<endl;


	while (b != 0)
        {
            sum = a ^ b;//calculate sum of a and b without thinking the carry 
            b = (a & b) << 1;//calculate the carry
            a = sum;//add sum(without carry) and carry
        }
        
        cout<< sum<<endl;

}