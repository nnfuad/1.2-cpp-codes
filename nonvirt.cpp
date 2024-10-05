#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Non-virtual function
     void sound() {
        cout << "Animal makes sound." << endl;
    }
};

// Derived class - Dog
class Dog : public Animal {
public:
    void sound() {
        cout << "Dog barks." << endl;
    }
};

// Derived class - Cat
class Cat : public Animal {
public:
    void sound() {
        cout << "Cat meows." << endl;
    }
};

int main() {
    // Creating objects of derived classes
    Dog dog;
    Cat cat;

    // Base class pointer
    Animal* animalPtr;

    // Pointing to Dog object
    animalPtr = &dog;
    animalPtr->sound();  // Calls Animal's sound() function, not Dog's

    // Pointing to Cat object
    animalPtr = &cat;
    animalPtr->sound();  // Calls Animal's sound() function, not Cat's
    dog.sound();

    return 0;
}