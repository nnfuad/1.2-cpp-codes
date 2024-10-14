#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Student {
private:
    int stdID;
    string name;

public:
    Student(int id, string n){
        stdID = id;
        name = n;
    } 
    

    void display() {
        cout << "Student ID: " << stdID << endl;
        cout << "Name: " << name << endl;
    }
};

int main() {
    Student student1(2210032, "Fuad");

    student1.display();

    return 0;
}
