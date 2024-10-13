#include <iostream>
using namespace std;

class base {
public:
    virtual int f(int a) = 0;
};

class derived : public base {
public:
    int f(int a) override { 
        return a * 10;  // Example implementation
    }
};

int main() {
    derived d;
    cout << d.f(5) << endl;
    return 0;
}