#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Employee {
protected:
    string name;
    double baseSalary;

public:
    Employee(string n, double salary) : name(n), baseSalary(salary) {}
 
    virtual double calculateSalary() {
        return baseSalary;
    }

    virtual void disp() {
        cout << "Employee Name: " << name << endl;
        cout << "Base Salary: Taka " << baseSalary << endl;
        cout << "Total Salary: Taka " << calculateSalary() << endl;
    }

};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string n, double salary, double b) : Employee(n, salary), bonus(b) {}
    double calculateSalary() override {
        return baseSalary + bonus;
    }

    void disp() override {
        cout << "Manager Name: " << name << endl;
        cout << "Base Salary: Taka " << baseSalary << endl;
        cout << "Bonus: Taka " << bonus << endl;
        cout << "Total Salary: Taka " << calculateSalary() << endl;
    }
};

class Intern : public Employee {
private:
    double bonus;

public:
    Intern(string n, double salary, double b) : Employee(n, salary), bonus(b) {}

    double calculateSalary() override {
        return baseSalary + bonus;
    }

    void disp() override {
        cout << "Intern Name: " << name << endl;
        cout << "Base Salary: Taka " << baseSalary << endl;
        cout << "Bonus: Taka " << bonus << endl;
        cout << "Total Salary: Taka " << calculateSalary() << endl;
    }
};

int main() {
    Employee* emp1 = new Employee("Ratul Mahmud", 70000);
    Employee* manager1 = new Manager("Rifat", 40000, 10000);
    Employee* intern1 = new Intern("Tarik", 25000, 5000);

    emp1->disp();
    cout << endl;

    manager1->disp();
    cout << endl;

    intern1->disp();
    cout << endl;
    return 0;
}
