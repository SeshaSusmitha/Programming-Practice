#include <iostream>
using namespace std;

int main()
{
	int a[] = {0,1,0,3,12};
	int len = sizeof(a)/sizeof(*a);
	int i,j,temp,k;
	cout<<"length = "<<len<<endl;
	j = len - 1;

	for(i=0; i<len; i++)
	{
		if(a[i] == 0)
		{
			//swap(a[i],a[j]);
			k = i;
			
			// temp = a[i];
			// a[i] = a[j];
			// a[j] = temp;
			// //j--;
			cout<<"hi"<<endl;
			while(true)
			{
				if(a[i] == 0)
				k = k+1;
				cout<<"k="<<k<<endl;
			}
			temp = a[i];
			a[i] = a[k];
			a[k] = temp;


		}
	}
	for(i=0;i<len;i++)
		cout<<a[i]<<endl;
}