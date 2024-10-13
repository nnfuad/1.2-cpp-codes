#include <iostream>
using namespace std;
class Base {
public:
    Base() {
        cout << "Base class constructor called\n";
    }
    ~Base() {
        cout << "Base class destructor called\n";
    }
};

class Derived : public Base {
public:
    Derived() {
        cout << "Derived class constructor called\n";
    }
    ~Derived() {
        cout << "Derived class destructor called\n";
    }
};

int main() {
    Derived obj;
    return 0;
}