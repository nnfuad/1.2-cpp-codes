#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Base1{
    public:
    string name = "nafis";
};

class Base2{
    public:
    string name = "fuad";
};

class Derived1: public Base1, public Base2{
    public:
    string name = "nur";
};

int main(){
    Derived1 d1;
    cout<<d1.name<<endl; 
    //wouldnt run if a name wasnt defined within the derived1 class itself...
    //would give compilation error for ambiguity...
    return 0;
}