 #include <iostream>

using namespace std;

int main()
{
    long long  a = 0, b = 0, c =0 , d = 0, sum = 0;
    cin >> a >> b >> c >> d;
    a %=100 ;
    b %=100 ;
    c %=100 ;
    d %=100 ;
    sum = (a*b*c*d)%100 ;
    if (sum  <= 9 )
    cout << "0" << sum << endl;
    else 
    cout  << sum << endl;
    return 0;
}