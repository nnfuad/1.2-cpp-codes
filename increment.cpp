#include <iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Input x: ";
    cin>>x;
    y=x++;
    cout<<"Value of y is: "<<y<<endl<<"value of x is "<<x<<endl;
    (z,y)= x++ + ++x;
    cout<<"Value of z is: "<<z<<endl<<"value of x is "<<x<<endl<<"value of y is "<<y<<endl;
}