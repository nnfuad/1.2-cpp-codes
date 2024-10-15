#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Person {
private:
    static int count;
    string name;

public:
    Person(string name) : name(name) {
        this->name = name;
        count++;
    }

    static void disp() {
        cout << "Total number of persons created: " << count << endl;
    }
};

int Person:: count = 0;

int main() {
    Person p1("Fuad");
    Person p2("Zyine");
    Person p3("Asif");

    Person::disp();

    return 0;
}
