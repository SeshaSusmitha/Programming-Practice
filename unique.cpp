#include <iostream>
#include <map>
using namespace std;

int main()
{
	string s = "susmita";
	//int list[256] = {0};
	map<char, int>list;
	for(int i : s)
		list[i]++;
	for(int i = 0; i < s.length(); i++)
	{
		if(list[s[i]] == 1)
		{
			//cout<<"hi"<<endl;
			cout<<s[i]<<endl;
			//cout<<"hello"<<endl;
			break;
		}
	}

}