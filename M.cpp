#include <iostream>

using namespace std;

int main()
{
   char x = ' ';
   cin >> x ;
   if (x >= 'A' && x <= 'Z')
   cout << "ALPHA\nIS CAPITAL" << endl;
   else if (x >= 'a' && x <= 'z')
   cout << "ALPHA\nIS SMALL" << endl;
   else 
   cout << "IS DIGIT" << endl;
    return 0;
}