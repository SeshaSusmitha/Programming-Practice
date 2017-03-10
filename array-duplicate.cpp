#include <iostream>
using namespace std;

int main()
{
	//int a[5] = {2,3,1,2,4};
	int a[3] = {1,1,2};
	int b[5],i, k;
	for(i = 0; i <3; i++)
	{
		b[i] = -1;
	}

	for(i=0; i<3; i++)
	{
		k = (a[i] % 3) ;
		if(b[k-1] == -1)
			b[k-1] = a[i];
		else
			cout<<b[k-1]<<endl;;
	}
}