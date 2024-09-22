#include <iostream>

using namespace std;

int main()
{
int x = 0, z = 0;
char y = 'a';
cin >> x >> y >> z ;
if (y == '+')
cout << x + z << endl;
else if (y == '-')
cout << x - z << endl;
else if (y == '*') 
cout << x * z << endl;
else 
cout << x / z << endl;
    return 0;
}