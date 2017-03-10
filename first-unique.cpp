//https://leetcode.com/problems/first-unique-character-in-a-string/?tab=Description

#include <iostream>
#include <vector>
using namespace std;

int main()
{
	string s = "susmita";
	// vector<int> count(26);
 //    for(int i=0;i<s.size();i++)
 //        count[s[i]-'a']++;
 //    for(int i=0;i<s.size();i++)
 //    {
 //        if(count[s[i]-'a']==1)
 //        {
 //            cout<<s[i]<<endl;
 //            break;
 //        }
 //    	// else
 //    	// {
 //    	// 	cout<<"no such char";
 //    	// 	break;
 //    	// }
 //    }

	int asci_list[256] = {0};
        for(int i: s)
            asci_list[i] ++;
        for(int i=0; i<s.length();i++)
        {
            if(asci_list[s[i]]==1) 
            {
            	cout<<s[i]<<endl;
            	break;
            }
          }

}
