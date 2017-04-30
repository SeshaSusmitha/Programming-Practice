/*  Reverse words in a string */


#include <iostream>
#include <vector>
#include <numeric>
#include <string>
using namespace std;

int main()
{
	string s = "I am Susmitha";
	cout<<s<<endl;
	string result;
	vector<string> str;
	int flag;
	int length = s.length();
	int i = 0,j, count = 0;
	int start = 0, end;

	while(i < length)
	{

		if((s[i] == ' ') || (s[i] == '\n'))
		{
			str.push_back(s.substr(start, count));

			i++;
			start = i;
			count = 0;
			flag = 0;
		}
		else
		{
			i++;
			count++;
			flag = 1;
			
		}


	}
	if(flag == 1)
	{
		str.push_back(s.substr(start, count));
	}

	for(i = 0; i < str.size(); i++)
	{
		cout<<str[i]<<endl;
	}



	for(i = str.size()-1; i >= 0; i--)
	{
		cout << str[i] << " ";
	}
	int mid = str.size()/2;

	cout<<endl;
	reverse(str.begin(), str.end());
	for(i = 0; i < str.size(); i++)
	{
		cout<<str[i]<< " ";
	}

	//s = accumulate(begin(str), end(str), s);


// 	for (auto const& s : str) { result += s; }
// 	cout<<"reversed string : " << result << endl; 
 }