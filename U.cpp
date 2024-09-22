#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(3);
   float  x = 0 ;
   cin >> x ;
   if ( x == int (x))
   cout << "int " << int (x) << endl;
   else 
   cout << "float " << int (x) << " " << float (x - int (x)) << endl;
    return 0;
}