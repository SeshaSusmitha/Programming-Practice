https://leetcode.com/problems/detect-capital/?tab=Description
#include <iostream>
using namespace std;

int main()
{
	string s = "hello";
	char c;
	int i = 1;
	int count=0,count1=0;
	int length = s.length();
	if(isupper(s[0]))
		count = count + 1;
	while(i<length)
	{
		c = s[i];
		if(isupper(c))
		{
			count1 = count1 + 1;
			
		}
		i++;
	}
	cout<<"count = "<<count<<endl;
	cout<<"count1 = "<<count1<<endl;
	if((count == 1) && (count1 == length -1) || (count == 1) && (count1 == 0) || (count == 0) && (count1 == 0))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
