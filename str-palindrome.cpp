#include <iostream>
using namespace std;

int main()
{
	string str = "madam";
	int len = str.length();
	int i = 0, flag;

	while(i < len/2)
	{
		if(str[i] == str[len-i-1])
		{
			flag = 0;
		}
		else
			flag = 1;
		i++;
	}

	if(flag == 0)
		cout << " palindrome " << endl;
	else if(flag == 1)
		cout << " not a palindrome " << endl;
}