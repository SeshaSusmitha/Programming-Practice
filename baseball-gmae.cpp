/* Program URL : https://leetcode.com/problems/baseball-game/description/ */

/*
Given a list of strings, each string can be one of the 4 following types:

Integer (one round's score): Directly represents the number of points you get in this round.
"+" (one round's score): Represents that the points you get in this round are the sum of the last two valid round's points.
"D" (one round's score): Represents that the points you get in this round are the doubled data of the last valid round's points.
"C" (an operation, which isn't a round's score): Represents the last valid round's points you get were invalid and should be removed.
Each round's operation is permanent and could have an impact on the round before and the round after.

You need to return the sum of the points you could get in all the rounds.
 */

#include <iostream>
#include <vector>
#include <stack>
#include <sstream>
using namespace std;

int main(){
	vector<string> ops;
	stack<int> stck;
	// ops.push_back("5");
	// ops.push_back("2");
	// ops.push_back("C");
	// ops.push_back("D");
	// ops.push_back("+");

	ops.push_back("5");
	ops.push_back("-2");
	ops.push_back("4");
	ops.push_back("C");
	ops.push_back("D");
	ops.push_back("9");
	ops.push_back("+");
	ops.push_back("+");
	
	

	int len = ops.size(), sum = 0, i = 0, val;
	while(i < len){
		cout << "initial while loop " << endl;
		if(ops[i] == "C"){
			cout << "val = C" << endl;
			stck.pop();
		}
		else if (ops[i] == "D"){
			cout << "val = D" <<  endl;
			int push_val = stck.top();
			stck.push(2 * push_val);
		}
		else if(ops[i] == "+"){
			cout << "val = +" << endl;
			int top_val = stck.top();
			stck.pop();
			int val2 = stck.top();
			int new_top = val2 + top_val;
			stck.push(top_val);
			stck.push(new_top);
		}
		else{
			cout << "in else as it is a number" << endl;
				stringstream ss(ops[i]);
				ss >> val;
				stck.push(val);		
		}
		i++;
	}
	
	while(!stck.empty()){
		cout << "in while loop" << endl;
		int top_val = stck.top();
		sum = sum + top_val;
		stck.pop();
	}

	cout << "Sum = " << sum << endl;
}
