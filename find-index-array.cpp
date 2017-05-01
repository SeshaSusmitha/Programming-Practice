/* Program that returns the index of a given element if present, -1 if not available */

#include <iostream>
using namespace std;

int main()
{
	int a[10] = {1, 2, 3, 4, 8, 5, 9, 6, 16, 12};
	int target, index;
	cout << "Enter target element : " << endl;
	cin >> target;

	while(( index < 10) && (a[index] != target))
		index++;
	cout << (index == 10 ? -1 : index);
	cout << endl;

}