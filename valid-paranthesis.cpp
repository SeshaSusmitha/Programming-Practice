#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string str = "(("  ;  
    stack <char> S;
	int str_len = str.length();
	if(str_len == 0)
	{
		cout<<"NULL string\n";
		return 0;
	}
	else if((str_len == 1) || (str_len % 2 == 1))
	    return false;
	else if(str[0] == '}' || str[0] == ')' || str[0] == ']')
		return false;
	else
	{	
		for(int i = 0; i < str_len ; i++ )
		{
			if(str[i] == '{' || str[i] == '(' || str[i] == '[')
				S.push(str[i]);
			else if((str[i] == '}' && S.top() != '{') || (str[i] == ')' && S.top() != '(') 
					 || (str[i] == ']' && S.top() != '[') || (S.empty()))
			{
					cout<<"not balanced"<<endl;	
					return false;
			}
			else
				S.pop();
		}
		if(!S.empty())
			cout<<"false";
		else
    		return true;
}
        
}