/***********************************************************************
Program URL : https://leetcode.com/problems/count-primes/#/description
***********************************************************************/

#include <iostream>
#include <iostream>
using namespace std;

void SieveOfEratosthenes(int n)
{
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    bool prime[n+1];
    int count  = 0;
    memset(prime, true, sizeof(prime));
    int prime_array[30],j=0;
 
    for (int p=2; p*p<=n; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p=2; p<n; p++)
    {
        if (prime[p])
        {
            count = count + 1;
        } 
        
    }
    cout<<"No of primes before n is : "<<count<<endl;


       
}
int main()
{
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    SieveOfEratosthenes(n);
    return 0;
}