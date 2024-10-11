#include <iostream>
using namespace std;
class coord {
private:
    int x, y;

public:
    coord() : x(0), y(0) {}

    coord(int i, int j){
        x = i;
        y = j;
    }


    friend coord operator>>(coord &ob, int shiftval);
    
    friend coord operator<<(coord &ob, int shiftval);

    
    void disp() const {
        cout << "x: " << x << ", y: " << y <<endl;
    }
};


coord operator>>(coord &ob, int shiftval) {
    ob.x >>= shiftval;
    return ob;
}

coord operator<<(coord &ob, int shiftval) {
    ob.y <<= shiftval;
    return ob;
}

int main() {
    coord ob(16, 4);
    ob << 1;
    ob.disp();

    ob >> 2;
    ob.disp();


    return 0;
}