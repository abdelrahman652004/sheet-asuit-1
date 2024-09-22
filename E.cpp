#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     double x=0,p= 3.141592653;
     cout << fixed << setprecision(9);
     cin>>x;
     cout<<p*x*x<<endl;

     return 0;
}