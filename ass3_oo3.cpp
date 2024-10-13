#include <iostream>
using namespace std;

class three_d {
private:
    int x, y, z;

public:
    three_d(int i, int j, int k) : x(i), y(j), z(k) {}

    three_d() : x(0), y(0), z(0) {}

    three_d operator+(const three_d &b) const {
        return three_d(x + b.x, y + b.y, z + b.z);
    }

    three_d operator-(const three_d &b) const {
        return three_d(x - b.x, y - b.y, z - b.z);
    }

    friend three_d& operator++(three_d &ob);

    friend three_d& operator--(three_d &ob);

    void display() const {
        cout << "x: " << x << ", y: " << y << ", z: " << z <<endl;
    }
};

three_d& operator++(three_d &ob) {
        ++ob.x;
        ++ob.y;
        ++ob.z;
        return ob;
    }
three_d& operator--(three_d &ob) {
        --ob.x;
        --ob.y;
        --ob.z;
        return ob;
    }

int main() {
    three_d point1(1, 2, 3);
    three_d point2(4, 5, 6);

    std::cout << "Point 1: ";
    point1.display();
    std::cout << "Point 2: ";
    point2.display();

    three_d point3 = point1 + point2;
    cout << "After addition (point1 + point2): ";
    point3.display();

    three_d point4 = point1 - point2;
    cout << "After subtraction (point1 - point2): ";
    point4.display();

    ++point1;
    cout << "After incrementing point1: ";
    point1.display();

    --point2;
    cout << "After decrementing point2: ";
    point2.display();

    return 0;
}