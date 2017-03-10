#include <iostream>
#include <vector>
using namespace std;
// void max_heapify(int *a, int i, int n)
// {
//     int j, temp;
//     temp = a[i];
//     j = 2*i;
//     while (j <= n)
//     {
//         if (j < n && a[j+1] > a[j])
//             j = j+1;
//         if (temp > a[j])
//             break;
//         else if (temp <= a[j])
//         {
//             a[j/2] = a[j];
//             j = 2*j;
//         }
//     }
//     a[j/2] = temp;
//     return;
// }
// void heapsort(int *a, int n)
// {
//     int i, temp;
//     for (i = n; i >= 2; i--)
//     {
//         temp = a[i];
//         a[i] = a[1];
//         a[1] = temp;
//         max_heapify(a, 1, i - 1);
//     }
// }
// void build_maxheap(int *a, int n)
// {
//     int i;
//     for(i = n/2; i >= 1; i--)
//     {
//         max_heapify(a, i, n);
//     }
// }
// int main()
// {
//     int n, i, x;
//     vector<int>nums = {4,2,3,1,2,4,1};
//     n = nums.size();
//     build_maxheap(nums,n);
//     heapsort(nums, n);
//     cout<<"sorted output\n";
//     for (i = 1; i <= n; i++)
//     {
//         cout<<nums[i]<<endl;
//     } 

//     cout<<endl;
//     for(i=1; i<=n; i++)
//     {
//         if((nums[i] != nums[i+1]) && (nums[i] != nums[i-1]))
//             cout<<nums[i]<<"  ";
//     }
//     cout<<endl;
// }














int main () {
  
  vector <int> v = {5,2,3,1,5,2,1};
    //vector <int> v = {1,0,1};
     //vector <int> v = {1};
   // vector <int> v = {17,12,5,-6,12,4,17,-5,2,-3,2,4,5,16,-3,-4,15,15,-4,-5,-6};
    //cout<<v.size();

  make_heap (v.begin(),v.end());
  sort_heap (v.begin(),v.end());
  for (int i=0; i < v.size(); i++)
  {
    //cout<<v[i]<<" ";
  }
cout<<endl;

  for (int i=0; i < v.size(); i++)
  {
    if(v.size() == 1)
    {
     //   return v[i];
        cout<<"v[i] "<<v[i]<<endl;
    }
    else
    {
        if(i!=0)
        {
            //cout<<"hi";
            if((v[i] != v[i+1]) && (v[i] != v[i-1]))
            {
                cout<<v[i]<<endl;
                break;
            }
        }
        else
        {
           // cout<<endl<<"hi";
            //cout<<"v[i]= "<<v[i];

            if(v[i] != v[i+1])
            {
                cout<<v[i]<<endl;
                break;
            }
        }
    }
  }
    

 // cout << '\n';

  //return 0;
}