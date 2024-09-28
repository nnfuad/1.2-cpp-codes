#include <iostream>
using namespace std;

class Base {
public:
    virtual void Hi() = 0;  // Pure virtual function
};

class Derived : public Base {
public:
    void Hi() override {  // Overriding the pure virtual function
        cout << "Hi from Derived class" << endl;
    }
};

int main() {
    // Base baseObj;  // Error: Cannot instantiate abstract class
    Derived derivedObj;  // This is fine
    derivedObj.Hi();     // Calls the derived class's implementation

    Base* basePtr = &derivedObj;  // Base pointer to Derived object
    basePtr->Hi();  // Calls Derived::Hi() via polymorphism

    return 0;
}