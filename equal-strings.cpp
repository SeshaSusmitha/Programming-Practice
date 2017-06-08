#include <iostream>
using namespace std;

bool findSimiliar(string x, string y);

int main()
{
	string str1 = "naren";
	string str2 = "susmi";
	string str3 = "abcd";
	string str4 = "abcd";
	bool res;

	res = findSimiliar(str1, str2);
	cout << "result = " << res << endl;

	res = findSimiliar(str3, str4);
	cout << "result = " << res << endl;
 }

 bool findSimiliar(string str1, string str2)
 {
 	int len1 = str1.length();
 	int len2 = str2.length();
 	int i;

 	if(len1 != len2)
 		return false;

 	while(i < len1)
 	{
 		if(str1[i] != str2[i])
 			return false;
 		i++;
 	}

 	return true;
 }