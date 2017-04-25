#include <iostream>
using namespace std;

class Shape
{
	protected:
		int height, width;

	public:
		Shape()
		{

		}
		Shape(int a, int b)
		{
			height = a;
			width = b;
		}

		virtual int area()
		{
			cout<<"Parent class"<<endl;
			return 0;
		}

};

class Rectangle : public Shape
{
public:
	Rectangle( int a = 0, int b = 0):Shape(a, b) { }
	int area()
	{
		cout<<"Rectangle class"<<endl;
		return height * width;
	}
};


class Square : public Shape
{
public:
	Square(int a = 0, int b = 0) : Shape(a, b){ }
	int area()
	{
		cout<<"Square class"<<endl;
		return (height * width)/2;
	}
};


int main()
{
	Shape *s;
	s->area();
	Rectangle r(10, 7);
	cout<<"hahaha"<<endl;
	s = &r;
	s->area();
}