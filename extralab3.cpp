#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Calculator {
public:
    double add(double a, double b) {
        return a + b;
    }

    double subtract(double a, double b) {
        return a - b;
    }

    double multiply(double a, double b) {
        return a * b;
    }

    double divide(double a, double b) {
        if (b != 0)
            return a / b;
        else {
            cout << "Error: Division by zero!" << endl;
            return 0;
        }
    }
};

int main() {
    Calculator calc;
    double n1, n2;
    char opt;

    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter an operator (+ or - or * or /): ";
    cin >> opt;
    cout << "Enter second number: ";
    cin >> n2;

    switch (opt) {
    case '+':
        cout << "Result: " << calc.add(n1, n2) << endl;
        break;
    case '-':
        cout << "Result: " << calc.subtract(n1, n2) << endl;
        break;
    case '*':
        cout << "Result: " << calc.multiply(n1, n2) << endl;
        break;
    case '/':
        cout << "Result: " << calc.divide(n1, n2) << endl;
        break;
    default:
        cout << "Error: Invalid operator!" << endl;
    }

    return 0;
}
