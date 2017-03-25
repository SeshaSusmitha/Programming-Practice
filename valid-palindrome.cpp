#include <iostream>
#include <string.h>
#include <ctype.h>
#include <locale>
using namespace std;

int main()
{
	string s = "A man, a plan, a canal: Panama";
	int len = s.length();
	cout<<"length 1 = "<<len<<endl;
	int i = 0;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	while(i < len)
	{
		char c = s[i];
		if(((c>='0')&&(c<='9')) || ((c>='a')&&(c<='z'))) 
		{
			//if((c>='a')&&(c<='z')) s[i]+=32; 
			++i;
		}
		else
		{
			s.erase(i,1);
			--len;
		}
	}
	len = s.length();
	int flag = 0;
	cout<<"len = "<<len<<endl;
	if(len == 0)
	{
		cout<<"null"<<endl;;
		exit(0);
	}
	else
	{		
		int mid = len/2;
		int j = len-1;
		for(int i = 0; i <= mid; i++)
		{
			if(s[i] != s[j])
			{
				cout<<s[i]<<" "<<s[j]<<endl;
				flag  = 1;
			}
			j--;
		}
	}
	if(flag == 0)
		cout<<"palindrome"<<endl;
	else
		cout<<"not a palindrome"<<endl;

	
}