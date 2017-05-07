/* Prints permutations of a given string */

#include <iostream>
using namespace std;

void permutate(string s, int i, int len);
int main()
{
	string s = "abcd";
	int len = s.length();
	permutate(s, 0, len-1);
}

void permutate(string s, int i, int len)
{
	int j;
	if(i == len)
		cout << s << endl;

	else
	{
		for( j = i; j < s.length(); j++)
		{
			swap(s[i], s[j]);
			permutate(s, i+1, len);
			swap(s[i], s[j]);
		}
	}
}

void swap(char &a, char &b)
{
	char temp;
	temp = a;
	a = b;
	b = temp;
}