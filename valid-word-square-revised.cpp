/**************************************************************************
Program URL : https://leetcode.com/problems/valid-word-square/#/description
**************************************************************************/

#include <iostream>
#include <vector>
using namespace std;

bool checkWordSquare(vector<string>str);

int main()
{
	vector <string> str;
	bool result;
	
	// str.push_back("susmi");
	// str.push_back("naren");
	// str.push_back("abcd");
	// str.push_back("bnrt");
	// str.push_back("crm");
	// str.push_back("dt");

	str.push_back("abc");
	str.push_back("bde");
	str.push_back("cefg");



	result = checkWordSquare(str);

	cout << "result = " << result << endl;


}

bool checkWordSquare(vector<string>words)
{

	// vector <string> result;
	int i, j;

	for( i = 0 ; i < words.size(); i++ )
	{
		for( j = 0 ; j < words[i].size(); j++)
		{
			//if(words[i][j] != words[j][i])
				if(j >= words.size() || words[j].size() <= i || words[j][i] != words[i][j])
				{
					cout << " i j " << i << j << endl;
					cout << "words[j].size()" << words[j].size() << endl;
					cout << "words[j]" << words[j] << endl;
					return false;
				}
		}
	}

	return true;

}