#include <iostream>
using namespace std;

int main()
{

	string s;
	cin>>s;
	int s_length = s.length();
	int number = 0;

	for(int i = 0; i < s_length; i++)
	{
		if( s[i] == 'I')
    	{
	        if(s[i+1] == 'V' || s[i+1] == 'X')
	        {
	            number = number - 1;
	        }
	        else
	        {
	            number=number + 1;
	        }

    	}

	    else if ( s[i]=='V')
	        number = number + 5;

	    else if(s[i] == 'X')
	    {
	        if(s[i+1] == 'L' || s[i+1] == 'C')
	            number = number - 10;
	        else
	            number = number + 10;
	    }

	    else if(s[i] == 'L')
	        number = number + 50;

	    else if( s[i] == 'C')
	    {
	        if(s[i+1] == 'D' || s[i+1]=='M')
	            number = number - 100;
	        else
	            number = number + 100;
	    }

	    else if(s[i]=='D')
	        number = number + 500;

	    else if(s[i]=='M')
	        number = number + 1000;
	}

	cout<< number;

}
