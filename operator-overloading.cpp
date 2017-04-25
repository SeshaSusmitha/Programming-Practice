/* Function implementing operator overloading */

#include <iostream>
using namespace std;

class Box
{
	private:
		double length;
		double breadth;

	public:
		double getArea()
		{
			return length * breadth;
		}
		void setLength(double len)
		{
			length = len;
		}
		void setBreadth(double bre)
		{
			breadth = bre;
		}

		Box operator+(const Box& b)
		{
			Box box;
			box.length = this->length + b.length;
			box.breadth = this->breadth + b.breadth;
			return box;
		}
};

int main()
{
	Box b1;
	Box b2;
	Box b3;

	b1.setLength(4.4);
	b1.setBreadth(2.2);

	b2.setLength(8.8);
	b2.setBreadth(1.1);

	b3 = b1 + b2;
	int area = b3.getArea();
	cout<<"Area of box3 = "<<area<<endl;


}