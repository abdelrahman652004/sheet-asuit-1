#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0;
    cin >> x;
    y = x / 1000;
    if (y % 2 == 0)
    cout << "EVEN" << endl;
    else 
    cout << "ODD" << endl;
    return 0;
}