#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Student {
private:
    string name;
    int stdID;

public:
    Student(string n = "", int id = 0)  {
        name = n;
        stdID = id;
    }

    int getID(){
        return stdID;
    }

    string getName(){
        return name;
    }

    void displayInfo() {
        cout << "Student Name: " << name << ", ID: " << stdID << endl;
    }
};

class School {
private:
    Student students[100];
    int count;

public:
    School(){
        count = 0;
    }

    void addStudent() {
        if (count < 100) {
            string name;
            int id;

            cout << "Enter Student Name: ";
            cin >> name;
            cout << "Enter Student ID: ";
            cin >> id;

            students[count] = Student(name, id);
            count++;
            cout << "Student added: " << name << endl;
        } else {
            cout << "Cannot add more students, No Vacancy!" << endl;
        }
    }

    void removeStudent() {
        int id;
        cout << "Enter Student ID to remove: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (students[i].getID() == id) {
                for (int j = i; j < count - 1; j++) {
                    students[j] = students[j + 1];
                }
                count--;
                cout << "Student with ID " << id << " has been removed." << endl;
                return;
            }
        }
        cout << "Student with ID " << id << " not found!" << endl;
    }

    void searchStudent(){
         int id;
        cout << "Enter Student ID to search: ";
        cin >> id;

        for (int i = 0; i < count; i++) {
            if (students[i].getID() == id) {
                cout << "Student found: ";
                students[i].displayInfo();
                return;
            }
        }
        cout << "Student with ID " << id << " not found." << endl;
    }


    void displayAllStudents(){
        if (count == 0) {
            cout << "No students in the school." << endl;
        } else {
            cout << "List of students:" << endl;
            for (int i = 0; i < count; i++) {
                students[i].displayInfo();
            }
        }
    }
};

int main() {
    School school;
    int choice;

    do {
        cout << "\n--- School Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Remove Student\n";
        cout << "3. Search for Student\n";
        cout << "4. Display All Students\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                school.addStudent();
                break;
            case 2:
                school.removeStudent();
                break;
            case 3:
                school.searchStudent();
                break;
            case 4:
                school.displayAllStudents();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    return 0;
}