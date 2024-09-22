

#include <iostream>

using namespace std;

int
main ()
{
  long long x = 0, y = 0, z = 0;
  cin >> x >> y >> z;
  if (x >= y && z >= y && x >= z)
    cout << y << " " << x << endl;
  else if (y >= x && y >= z && z >= x)
    cout << x << " " << y << endl;
  else if (x >= y && x >= z && y >= z)
    cout << z << " " << x << endl;
  else if (y >= x && z >= x && z >= y)
    cout << x << " " << z << endl;
  else if (y >= x && y >= z && x >= z)
    cout << z << " " << y << endl;
  else
    cout << y << " " << z << endl;
  return 0;
}