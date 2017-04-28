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
 
 
class A: public Interface1  // Note the order
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

};

class B: public A  // Note the order
{
	public:
	  B() 
	  {
	  	cout << "A's constructor called" << endl;
	  }

	  // void fun1()
	  // {
	  // 	cout<<"Hi"<<endl;
	  // }

};
 
int main()
{
    B a;
    return 0;
}