#include <iostream>
#include <string>
using namespace std;

class Library {
private:
    string ISBN[100];    
    string name[100];    
    int count = 0;       

public:
    
    void addFirstBook() {
        cout << "Enter Book Name: ";
        
        getline(cin, name[count]);
        cout << "Enter ISBN no: ";
        cin >> ISBN[count];
        count++;
    }

    void AddBook(string n, string I) {
        if (count >= 0 && count < 100) {
            name[count] = n;
            ISBN[count] = I;
            count++;
            cout << "Book \"" << n << "\" with ISBN \"" << I << "\" has been added." << endl;
        } else {
            cout << "Library is full or invalid request!" << endl;
        }
    }

    void remBook(string bookISBN) {
        bool found = false;
        for (int i = 0; i < count; i++) {
            if (ISBN[i] == bookISBN) {
                found = true;
                cout << "Book \"" << name[i] << "\" with ISBN \"" << ISBN[i] << "\" has been removed." << endl;

                for (int j = i; j < count - 1; j++) {
                    name[j] = name[j + 1];
                    ISBN[j] = ISBN[j + 1];
                }
                count--;
                break;
            }
        }
        if (!found) {
            cout << "Book with ISBN \"" << bookISBN << "\" not found!" << endl;
        }
    }

    void displayInfo() {
        if (count == 0) {
            cout << "No books available in the library." << endl;
        } else {
            cout << "Books available in the library:" << endl;
            for (int i = 0; i < count; i++) {
                cout << i + 1 << ". " << name[i] << " (ISBN: " << ISBN[i] << ")" << endl;
            }
        }
    }
};

int main() {
    Library library;

    library.addFirstBook();

    int choice;
    string bookName, bookISBN;

    do {
        cout << "\nLibrary Options:" << endl;
        cout << "1. Add Book" << endl;
        cout << "2. Remove Book" << endl;
        cout << "3. Display Books" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter Book Name: ";
            cin.ignore();
            getline(cin, bookName);
            cout << "Enter ISBN no: ";
            cin >> bookISBN;
            library.AddBook(bookName, bookISBN);
            break;

        case 2:
            cout << "Enter ISBN no of the book you want to remove: ";
            cin >> bookISBN;
            library.remBook(bookISBN);
            break;

        case 3:
            library.displayInfo();
            break;

        case 4:
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice! Please select again." << endl;
        }
        cout << endl;
    } while (choice != 4);

    return 0;
}
