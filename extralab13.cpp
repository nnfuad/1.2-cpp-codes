#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Rectangle {
private:
    double length;
    double breadth;

public:
    Rectangle(double l = 0.0, double b = 0.0){
        length = l;
        breadth = b;
    }

    double area() const{
        return length * breadth;
    }

    bool operator==(Rectangle const& other){
        return this->area() == other.area();
    }

    bool operator>(Rectangle const& other){
        return this->area() > other.area();
    }

    bool operator<(Rectangle const& other){
        return this->area() < other.area();
    }

    void disp(){
        cout << "Length: " << length << ", Breadth: " << breadth << ", Area: " << area() << endl;
    }
};

int main() {
    cout<<"Enter Rectangle 1's height and width: ";
    double a1,b1,a2,b2;
    cin>>a1>>b1;
    cout<<"Enter Rectangle 2's height and width: ";
    cin>>a2>>b2;
    Rectangle r1(a1, b1);
    Rectangle r2(a2, b2);

    cout << "Rectangle 1: "; r1.disp();
    cout << "Rectangle 2: "; r2.disp();

    if (r1 == r2) {
        cout << "The rectangles have equal areas." << endl;
    } else if (r1 > r2) {
        cout << "Rectangle 1 has a larger area than Rectangle 2." << endl;
    } else {
        cout << "Rectangle 1 has a smaller area than Rectangle 2." << endl;
    }

    return 0;
}
