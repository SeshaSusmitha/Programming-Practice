// Problem URL 
// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/?tab=Description

#include <iostream>
#include <vector>
using namespace std;


int main () {
   vector <int> nums = {1, 2, 2, 3, 3, 4, 7, 8};
   vector <int> a;

   int asci_list[ 9 ] = {0};
   
   for(int i: nums){
       asci_list[ i ] ++;
       cout << i << " ";
   }

   cout << endl;
        
   for(int i=1; i<=nums.size();i++)
   {
        if(asci_list[ i ] == 0) 
        {
            cout << nums[i] << endl;
            a.push_back(i);
        }
    }
}