#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : public A {
public:
    void show() {
        cout << "Class B" << endl;
    }
};

class C : public B {
public:
    void show() {
        cout << "Class C" << endl;
    }
};

int main() {
    C obj;
    obj.show();  // Ambiguity: Which show() to call?
    obj.B::show(); //using scope  resolution to call specifically
    obj.A::show(); //using scope  resolution to call specifically
    return 0;
}