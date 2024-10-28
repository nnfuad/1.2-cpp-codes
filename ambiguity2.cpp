#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

// class A {
// public:
//     void show() {
//         cout << "Class A" << endl;
//     }
// };

// class B : public A {
//     void show() {
//         cout << "Class B" << endl;
//     }
//  };

// class C : public A {
//     void show() {
//         cout << "Class C" << endl;
//     }
//  };

// class D : public B, public C { 
//     void show() {
//         cout << "Class D" << endl;
//     }
// };

// int main() {
//     D obj;
//     obj.show();  // Calls A's show() with ambiguity //shows error//
//     //but true(compiling error) only with diamond problem no with geenral ambiguity...
//     return 0;

// }

class A {
public:
    void show() {
        cout << "Class A" << endl;
    }
};

class B : virtual public A {
        void show() {
        cout << "Class B" << endl;
    }
 };

class C : virtual public A { 
            void show() {
        cout << "Class C" << endl;
    }

};

class D : public B, public C { 
           void show() {
            cout << "Class D" << endl;
    }

};

int main() {
    D obj;
    obj.show();  // Calls A's show() without ambiguity
    return 0;
}