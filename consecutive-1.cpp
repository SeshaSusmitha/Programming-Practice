//Problem URL : https://leetcode.com/problems/max-consecutive-ones/?tab=Description
#include <iostream>
using namespace std;

int main()
{
	int a[ ]= {1,1,1,1,1,1,1,1,1,2,3,1,1,1,1,1,1,1};
	int count,max_count=0;
	int len = sizeof(a)/sizeof(a[0]);
	for(int i = 0; i<len ;i++)
	{
		count = 1;
		if(a[i] == 1)
			while(i<len)
			{
				if(a[i+1] == 1)
				{
					count = count+1;
					i=i+1;
				}

				else
				{
					if(max_count < count)
						max_count = count;
			
				//cout<<max_count<<endl;
					break;
				}
			}
		else
			continue;
	}

	//cout<<max_count<<endl;

}
