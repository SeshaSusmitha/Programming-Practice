//Problem URL : https://leetcode.com/problems/reverse-string/?tab=Description

#include <iostream>
using namespace std;

int main()
{
	string s = "hello";
	// string new_str = "";
	// int k=1;
	// for(int i = s.length()-1; i >= 0; i--)
	// {
	// 	new_str = new_str + s[i];
	// 	k++;
	// }
	// cout<<"reverse ="<<new_str<<endl;

	int len = s.length();
	cout<<"len = "<<len<<endl;
	int j = len-1;
	int i;
	for(i = 0; i<len/2; i++)
	{
		swap(s[i],s[j]);
		j--;
	}
	cout<<s<<endl;
}
