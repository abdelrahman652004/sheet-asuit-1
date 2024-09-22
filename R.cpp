#include <iostream>

using namespace std;

int main () {
    
    double x , y ,z , years , months , days;
    
    cin >> x;
    
    years = x / 365 ;
    y = years - int (years) ;
    months =( y * 365 ) / 30 ;
    z = months - int (months);
    days = z * 30;
    
    cout << int (years) << " years" << endl;
    cout << int (months) << " months" << endl;
    cout << int (days) << " days" << endl;
    
    
    
    
    return 0;
}