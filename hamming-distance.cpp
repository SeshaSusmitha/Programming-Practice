// Problem URL : https://leetcode.com/problems/hamming-distance/?tab=Description

#include <iostream>

using namespace std;

int main()
{
	int x,y,v,dist=0;
	cin>>x;
	cin>>y;
	v = x ^ y;
	cout<<"v ="<<v<<endl;
    while (v) {
      	++dist;
        v = v & (v - 1);
        }
    cout<<dist<<endl;
}