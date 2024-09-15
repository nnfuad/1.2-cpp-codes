// #include <iostream>
// #include <cmath>
// #include <string>
// #include <vector>
// #include <map>
// using namespace std;

// class Box {
// private:
//     double width;  // Private member variable

// public:
//     // Public method to set the width (declaration only)
//     void setWidth(double w);

//     // Friend function declaration
//     friend void printWidth(Box& b);
// };

// // Definition of the setWidth function outside the class
// void Box::setWidth(double w) {
//     width = w;
// }

// // Definition of the friend function
// void printWidth(Box& b) {
//     // Accessing private member 'width' of class 'Box'
//     cout << "Width: " << b.width << endl;
// }

// int main() {
//     Box myBox;  // Creating an object of the Box class
//     myBox.setWidth(10.0);  // Setting the width using the public method

//     mybox.printWidth();
//     return 0;
// }
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Box {
private:
    double width;  // Private member variable

public:
    // Public method to set the width (declaration only)
    void setWidth(double w);

    // Friend function declaration
    friend void printWidth(Box& b);
};

// Definition of the setWidth function outside the class
void Box::setWidth(double w) {
    width = w;
}

// Definition of the friend function
void printWidth(Box& b) {
    // Accessing private member 'width' of class 'Box'
    cout << "Width: " << b.width << endl;
}

int main() {
    Box myBox;  // Creating an object of the Box class
    myBox.setWidth(10.0);  // Setting the width using the public method

    printWidth(myBox);
    return 0;
}