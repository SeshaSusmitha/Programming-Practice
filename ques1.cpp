#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
	int num;

	cout<<"Enter number: "<<endl;
	cin>>num;
	if((num % 4 == 0) && (num % 3 == 0))
		cout<<"Don’t be SCRRD"<<endl;
	else if(num % 4 == 0)
		cout<<"Don’t be"<<endl;
	else if(num % 3 == 0)
		cout<<"SCRRD"<<endl;

}