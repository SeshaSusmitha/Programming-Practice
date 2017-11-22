#include <iostream>
using namespace std;

int main(){
	int n = 225, i = 1, flag = 0, sum = 0;

	while(n > 0){

		n -= i;
		i = i + 2;
		
	}


	if(n == 0)
		cout << "perfect square" << endl;
	else
		cout << "not a perfect square" << endl;

}