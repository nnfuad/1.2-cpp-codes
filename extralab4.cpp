#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Person {
private:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    bool isAdult(){
        return age >= 18;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        if (isAdult()) {
            cout << name << " is an adult." << endl;
        } else {
            cout << name << " is not an adult." << endl;
        }
    }
};

int main() {
    string name;int age;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter age: ";
    cin>>age;
    Person p1(name, age);

    p1.display();

    return 0;
}
