//Problem URL: https://leetcode.com/problems/fizz-buzz/?tab=Description

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> vec_str;
	string a = "Fizz";
	string b = "Buzz";
	string c = "FizzBuzz";
	string d = "\"";

	for(int i = 1; i <= n; i++)
	{
			
			 if(i%3 == 0)
			 	{  
			 		vec_str.push_back(a); 
			 	}

			else if(i % 5 == 0)
				{ 
					vec_str.push_back(b); 
				}

			else if((i % 5 == 0) && (i%3 == 0))
				{ 
					vec_str.push_back(c); 
				}

			else
				{	
					vec_str.push_back(to_string(i));
				}
	}
	return vec_str;
}  

	

	