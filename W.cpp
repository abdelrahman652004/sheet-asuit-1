#include <iostream>

using namespace std;

int main()
{
    long long x = 0 , y = 0, z = 0 , m1 = 0 ,m2 = 0 ,m3 = 0;
    char a = ' ' , b = ' ';
    cin >> x >> a >> y >> b >> z ;
    m1 = x + y ;
    m2 = x - y ;
    m3 = x * y ;
    switch (a)
    {
        case ('+'):
        if (m1 == z) 
        cout << "Yes" << endl;
        else 
        cout << m1 << endl;
        break ;
        
        case ('-'):
        if (m2 == z) 
        cout << "Yes" << endl;
        else 
        cout << m2 << endl;
        break ;
        
        case ('*'):
        if (m3 == z) 
        cout << "Yes" << endl;
        else 
        cout << m3 << endl;
        break ;
        
    }
    return 0;
}