#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Appliance {
public:
    virtual void turnOn() = 0;
};

class WashingMachine : public Appliance {
public:
    void turnOn() override {
        cout << "Washing Machine is running." << endl;
    }
};

class Refrigerator : public Appliance {
public:
    void turnOn() override {
        cout << "Refrigerator is running." << endl;
    }
};

int main() {
    Appliance* baseptr;
    WashingMachine w1;
    Refrigerator r1;

    baseptr = &w1;
    baseptr->turnOn();
    
    baseptr = &r1;
    baseptr->turnOn();

    return 0;
}
