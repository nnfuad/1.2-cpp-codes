#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class complex{
    private:

    public:
        double real;
        double img;
        complex(double r, double i) : real(r), img(i){};

        complex operator+( complex const &other){
            return complex(this->real + other.real , this->img + other.img);
        }

};

int main(){
    complex c1(7.0,8.1);
    complex c2(7.0,8.1);
    c2 = c2+c1;
    cout<<c2.real<<" + "<<c2.img<<"i"<<endl;
}