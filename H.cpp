#include <iostream>

using namespace std;

int
main ()
{
float  x = 0, y = 0, z ;
cin >> x >> y;
z = x / y ;
cout << "floor " << x << " / " << y << " = " << int (z) << endl;  
if (x == y)
cout << "ceil " << x << " / " << y << " = " << int (z) << endl;
else 
cout << "ceil " << x << " / " << y << " = " << int (z+1) << endl;
if ((z) >= int(z)+0.5)
cout << "round " << x << " / " << y << " = " << int (z+1) << endl; 
else
cout << "round " << x << " / " << y << " = " << int (z) << endl;

return 0;
}