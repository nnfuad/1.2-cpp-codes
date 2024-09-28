#include <iostream>
using namespace std;

class Base {
public:
    void greet() {
        cout << "Hello from Base class" << endl;
    }
};

class Derived1 : public Base {
public:
    void greet() {
        cout << "Hello from Derived1 class" << endl;
    }
};

class Derived2 : public Base {
public:
    void greet() {
        cout << "Hello from Derived2 class" << endl;
    }
};

class DerivedFinal : public Derived1, public Derived2 {
    // No greeting defined here
};

int main() {
    DerivedFinal obj;
    // obj.greet();  // Ambiguous: which greet() to use?

    obj.Derived1::greet();  // Calls Derived1's greet()
    obj.Derived2::greet();  // Calls Derived2's greet()

    return 0;
}