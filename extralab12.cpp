#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Complex {
private:
    double real;
    double img;

public:
    Complex(double r = 0.0, double i = 0.0){
        real = r;
        img = i;
    }

    void input() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imginary part: ";
        cin >> img;
    }

    Complex operator+(const Complex& other){
        return Complex(real + other.real, img + other.img);
    }

    Complex operator-(const Complex& other){
        return Complex(real - other.real, img - other.img);
    }

    Complex operator*(const Complex& other) {
        return Complex(
            real * other.real - img * other.img,
            real * other.img + img * other.real
        );
    }

    Complex operator/(const Complex& other){
        double denominator = other.real * other.real + other.img * other.img;
        return Complex(
            (real * other.real + img * other.img) / denominator,
            (img * other.real - real * other.img) / denominator
        );
    }

    void display(){
        if (img >= 0)
            cout << real << " + " << img << "i" << endl;
        else
            cout << real << " - " << -img << "i" << endl;
    }
};

int main() {
    Complex c1, c2;

    cout << "Enter the first complex number:\n";
    c1.input();

    cout << "Enter the second complex number:\n";
    c2.input();

    Complex sum = c1 + c2;
    Complex difference = c1 - c2;
    Complex product = c1 * c2;
    Complex quotient = c1 / c2;

    cout << "\nFirst complex number: "; c1.display();
    cout << "Second complex number: "; c2.display();
    cout << "\nSum: "; sum.display();
    cout << "Substraction: "; difference.display();
    cout << "Product: "; product.display();
    cout << "Quotient: "; quotient.display();

    return 0;
}
