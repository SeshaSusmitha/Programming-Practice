/***************************************************************************************
*** Leet Code URL : https://leetcode.com/problems/length-of-last-word/#/description ***
****************************************************************************************/


#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str = "Sesha Susmitha Yellamraju";
	//string str = "sesha ";
	
	int i = 0, len = 0, length = str.length();
	cout<<"length = "<<length<<endl;
	while(str[i])
	{
		if(str[i++]!= ' ')
			++len;
		else if(str[i] && str[i] != ' ')
			len = 0;
	}

	cout<<"length of last word = "<<len<<endl;



}