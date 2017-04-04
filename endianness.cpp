/* Program to find how the value is stored, i.e Little Endian  / Big Endian */

#include <iostream>
using namespace std;

#define LITTLE_ENDIAN 1
#define BIG_ENDIAN 0

int testByteOrder();

int main()
{
	int result = testByteOrder();
	if(result == LITTLE_ENDIAN) 
		cout<< "Little Endian" << endl;
	else
		cout<< "Big Endian" << endl;

}

int testByteOrder()
{
	short int word = 0001;
	char *b = (char *)&word;
	return (b[0] ? LITTLE_ENDIAN : BIG_ENDIAN);
}



