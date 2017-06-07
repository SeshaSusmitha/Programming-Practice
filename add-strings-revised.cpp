#include <iostream>
using namespace std;

int main()
{
	string num1 = "6913259244";
	string num2 = "71103343";

	int i = num1.size() - 1;
	int j = num2.size() - 1;

	string res = "";
	int carry = 0;

	while( i >= 0 || j >= 0 || carry)
	{
		long sum = 0;
		if(i >= 0)
		{
			sum += num1[i] - '0';
			i--;
		}
		if(j >= 0)
		{
			sum += num2[j] - '0';
			j--;
		}

		sum = sum + carry;
		carry = sum / 10;
		sum = sum % 10;

		res = res + to_string(sum);
	}

	reverse(res.begin(), res.end());

	cout << res << endl;
}