#include <iostream>

using namespace std;

int main()
{
int x = 0, y = 0;
char z = 'a';
cin >> x >> z >> y;
if ((z == '=') && (x == y))
cout << "Right" << endl;
else if ((z == '>') && x > y)
cout << "Right" << endl;
else if ((z == '<') && x < y)
cout << "Right" << endl;
else 
cout << "Wrong" << endl; 
    return 0;
}
