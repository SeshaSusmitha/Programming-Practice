#include <iostream>
using namespace std;

int main(){
	int n = 1;
	int a, b, c;
	a = 0;
	b = 1;
	c = a + b;
	for(int i = 2; i <= n; i++){
		c = a + b;
		a = b;
		b = c;
	}

	cout << c << endl;
}