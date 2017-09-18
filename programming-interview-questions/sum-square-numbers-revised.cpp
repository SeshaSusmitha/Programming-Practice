/* Program URL : https://leetcode.com/problems/sum-of-square-numbers/ */

#include <iostream>
#include <math.h>
using namespace std;

bool check( int num);

int main(){

	int n;
	cout << "enter n : " << endl;
	cin >> n;
	cout << check(n);
	
}


bool check(int n){
	int a = 0, val;
	int b = sqrt(n);


	while ( a <= b){

		val = (a*a) + (b*b);
		if( val == n)
			return true;
		else if (val > n)
			b--;
		else
			a++;
	}
	return false;
}



