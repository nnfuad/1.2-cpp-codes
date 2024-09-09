#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Point {
private:
    int x, y;
public:
    Point(int a, int b);        // Constructor declaration with parameter names
    friend void calcdist(Point &a);  // Friend function declaration
};

// Define the constructor with proper parameter names
Point::Point(int a, int b) {
    x = a;   // Correctly assigning 'a' to 'x'
    y = b;   // Correctly assigning 'b' to 'y'
}

void calcdist(Point &a) {
    // Accessing private members x and y using the object 'a'
    float dist = sqrt(pow(a.x, 2) + pow(a.y, 2));  // Using 'a' to access x and y
    cout << "Distance from origin: " << dist << endl;
}

int main() {
    Point p(3, 4);  // Creating an object of Point
    calcdist(p);    // Calling the friend function
}
