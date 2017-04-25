/* Function implementing operator overloading */

#include <iostream>
using namespace std;

class printData
{
	public:
		void print(int n)
		{
			cout<<"printing int "<<n<<endl;
		}
		void print(double d)
		{
			cout<<"printing float "<<d<<endl;
		}
		void print(string c)
		{
			cout<<"printing string "<<c<<endl;
		}
};

int main()
{
	printData p;
	p.print(4);
	p.print(8.8);
	p.print("Hello World");
}