/***************************************************************************************
*** Leet Code URL : https://leetcode.com/problems/length-of-last-word/#/description ***
****************************************************************************************/


#include <iostream>
#include <string>
using namespace std;

int main()
{
	
	string s = "Sesha Susmitha Yellamraju";
	int length = s.length();
	int tail = length - 1, len = 0;
	while((tail >= 0) && (s[tail] == ' '))
		tail--;
	while((tail >= 0) && (s[tail] != ' '))
	{
		len++;
		tail --;
	}

	cout<<"Length of last word = "<<len<<endl;


}