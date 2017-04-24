/************************************************************************
**************************** Count And Say ******************************
Leet Code URL : https://leetcode.com/problems/count-and-say/#/description 
************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n = 1222221112;
    string str = to_string(n);
    cout<<"str = "<<str<<endl;

	string new_str;

	char ch ;
	char ch1;

	int i = 0, count = 1, j = 1, total_count = 0, flag;
	int length = str.length();
	
	while(i < length)
	{
		ch = str[i];
		count = 1;
		j = i + 1;
		while((str[j] == ch) && (j < length))
		{	
            count++;
            j++;
        }
        if(count > 0)
        {
            new_str += count + '0';
        }
        new_str += ch;
        
        i = j;
    }     
    cout<<new_str<<endl;;

}