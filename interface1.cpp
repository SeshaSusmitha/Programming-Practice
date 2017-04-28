#include <iostream>
using namespace std;
 
class Interface1
{
	public:
  	Interface1()  
  	{ 
  		cout << "Abs1's constructor called" << endl; 
  	}

  	virtual void fun1() = 0; // Pure virtual function

};
 
class Interface2
{
	public:
	  Interface2()
	  {
	  	 cout << "Abs2's constructor called" << endl;
	  }

	  virtual void fun3() = 0;

};
 
class A: public Interface1, public Interface2  // Note the order
{
	public:
	  A() 
	  {
	  	cout << "A's constructor called" << endl;
	  }

	  void fun1()
	  {
	  	cout<<"Hi"<<endl;
	  }

	  void fun3()
	  {
	  	cout<<"hello"<<endl;
	  }
};
 
int main()
{
    A a;
    return 0;
}