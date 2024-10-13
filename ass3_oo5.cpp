#include <iostream>
using namespace std;

class planet {
protected:
    long double distance;
    int revolve;

public:
    planet(long double d, int r) {
        distance =d;
        revolve =r;
    }
};

class earth : public planet {
    long double circumference;

public:
    earth(long double d, int r) : planet(d, r) {
        circumference = 2 * distance * 3.1416;
    }

    void show() {
        cout << "Distance from the sun: " << distance << " miles" << endl;
        cout << "Days to revolve around the sun: " << revolve << " days" << endl;
        cout << "Circumference of the orbit: " << circumference << " miles" << endl;
    }
};

int main() {
    earth ob(93000000, 365); 
    ob.show(); 

    return 0;
}