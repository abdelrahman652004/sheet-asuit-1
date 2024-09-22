#include <iostream>
 
using namespace std;
 
int
main ()
{
long long x = 0 , y = 0;
cin >> x >> y;
if ((x % y == 0 ) || (y % x == 0 ))
cout << "Multiples" << endl;
else
cout << "No Multiples" << endl; 
 
 
 
return 0;
}