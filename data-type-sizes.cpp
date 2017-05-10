#include <iostream>
using namespace std;
 
int main () {
   // number definition:
   short  s;
   int    i;
   long   l;
   float  f;
   double d;
   
   // number assignments;
   s = 10;      
   i = 1000;    
   l = 1000000; 
   f = 230.47;  
   d = 30949.374;
   
   // number printing;
   cout << "short  s :" << s << endl;
   cout << "int    i :" << i << endl;
   cout << "long   l :" << l << endl;
   cout << "float  f :" << f << endl;
   cout << "double d :" << d << endl;

   cout << "size of short  s :" << sizeof(s) << endl;
   cout << "size of int    i :" << sizeof(i) << endl;
   cout << "size of long   l :" << sizeof(l) << endl;
   cout << "size of float  f :" << sizeof(f) << endl;
   cout << "size of double d :" << sizeof(d) << endl;
 
   return 0;
}