// #include <iostream>
// #include <string>
// using namespace std;
// class MyClass {
// // The class
// private:
// // Access specifier
//     int myNum;
// // Attribute (int variable)
//     string myString; // Attribute (string variable)
// };
// int main() {
//     MyClass myObj; // Create an object of MyClass
//     // Access attributes and set values
//     myObj.myNum = 15;
//     myObj.myString = "Some text";
//     // Print values
//     cout << myObj.myNum << "\n";
//     cout << myObj.myString; 
//     return 0 ;
// }
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class MyClass {
private:
    int myNum;        // Private attribute (int variable)
    string myString;  // Private attribute (string variable)

public:
    // Setter methods to set values
    void setMyNum(int num) {
        myNum = num;
    }

    void setMyString(string str) {
        myString = str;
    }

    // Getter methods to get values
    int getMyNum() {
        return myNum;
    }

    string getMyString() {
        return myString;
    }
};

int main() {
    MyClass myObj;  // Create an object of MyClass

    // Use setters to assign values to private attributes
    myObj.setMyNum(15);
    myObj.setMyString("Some text");

    // Use getters to access and print the values
    cout << "myNum: " << myObj.getMyNum() << endl;
    cout << "myString: " << myObj.getMyString() << endl;

    return 0;
}