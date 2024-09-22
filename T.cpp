#include <iostream>

 using namespace std;

 
int
main ()
{
  
 
int x, y, z;
  
 
cin >> x >> y >> z;
  
if (x >= y && x >= z && y >= z)
    
cout << z << "\n" << y << "\n" << x << "\n\n" << x << "\n" << y << "\n"
      << z << endl;
  
  else if (x >= y && x >= z && z >= y)
    
cout << y << "\n" << z << "\n" << x << "\n\n" << x << "\n" << y << "\n"
      << z << endl;
  
  else if (y >= x && y >= z && x >= z)
    
cout << z << "\n" << x << "\n" << y << "\n\n" << x << "\n" << y << "\n"
      << z << endl;
  
  else if (y >= x && y >= z && z >= x)
    
cout << x << "\n" << z << "\n" << y << "\n\n" << x << "\n" << y << "\n"
      << z << endl;
  
  else if (z >= x && z >= y && x >= y)
    
cout << y << "\n" << x << "\n" << z << "\n\n" << x << "\n" << y << "\n"
      << z << endl;
  
  else
    
cout << x << "\n" << y << "\n" << z << "\n\n" << x << "\n" << y << "\n"
      << z << endl;
  
return 0;

}