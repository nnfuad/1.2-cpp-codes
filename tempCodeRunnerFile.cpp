#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Book {
private:
    string title;
    string author;
    double price;

public:
    Book(string t, string a, double p){
        title = t;
        author = a;
        price = p;
    }

    void display() const {
        cout << "Book Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Book myBook("1984", "George Orwell", 10.00);

    myBook.display();

    return 0;
}
