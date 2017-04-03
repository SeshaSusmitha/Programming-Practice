#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	string s = "anagram";
	string t = "nagaram";
	sort(t.begin(),t.end());
	sort(s.begin(),s.end());
	bool flag;
	if(s == t)
		//cout<<"same"<<endl;
		flag = true;
	else
		//cout<<"not same"<<endl;
		flag = false;
	if(flag)
		cout<<"anagram"<<endl;
	else
		cout<<"not anagram"<<endl;
	// cout<<t<<endl;
	// cout<<s<<endl;
	// int count = 0;

	// if(s.length() != t.length())
	// 	cout<<"false"<<endl;
	// else
	// {
	// 	int asci_list1[256];
	// 	int asci_list2[256];
	// 	for(int i : s)
	// 	asci_list1[i]++;
	// 	for(int j : t)
	// 	asci_list2[j]++;
	// 	for(int i = 0; i < s.length(); i++)
	// 	{
	// 		if(asci_list1[s[i]] == asci_list2[t[i]])
	// 			count++;
	// 	}
	// 	cout<<"count = "<<count<<endl;
	// 	if(count == s.length())
	// 		cout<<"yes"<<endl;

	// }
}