#include <iostream>
using namespace std;

class Fibonacci {
private:
    int n;

public:
    Fibonacci(int terms) {
        n = terms;
    }

    void displaySeries() {
        int first = 0, second = 1, next;

        if (n <= 0) {
            cout << "Number of terms must be greater than 0." << endl;
            return;
        }

        cout << "Fibonacci Series: ";

        for (int i = 1; i <= n; ++i) {
            if (i == 1) {
                cout << first << " ";
                continue;
            }
            if (i == 2) {
                cout << second << " ";
                continue;
            }
            next = first + second;
            first = second;
            second = next;

            cout << next << " ";
        }

        cout << endl;
    }
};

int main() {
    int terms;


    cout << "Enter the number of terms in the Fibonacci series: ";
    cin >> terms;


    Fibonacci fib(terms);


    fib.displaySeries();

    return 0;
}