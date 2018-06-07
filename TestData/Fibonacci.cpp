#include<iostream>
 
using namespace std;
 
main()
{
   int n, c, ans,first = 0, second = 1, next;
 
   cin >> n;
 
   for ( c = 0 ; c <= n ; c++ )
   {
      if ( c <= 1 )
         next = c;
      else
      {
         next = first + second;
         first = second;
         second = next;
      }
      ans = next;
   }
   cout << ans << endl;
   return 0;
}