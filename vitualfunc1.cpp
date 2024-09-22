#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Base{
public:
    void Hi(){
        cout<<"Hi from Base class"<<endl;
    }
    void Mew(){
        cout<<"Mew from Base class"<<endl;
    }
};

class Derived : public Base{
public:
    void Hi(){
        cout<<"Hi from derived class"<<endl;
    }
    void Mew(){
        cout<<"Mew from derived class"<<endl;
    }
};

int main(){
    
    Base base1;
    Derived derived1;
    cout<<endl;
    base1.Hi();
    base1.Mew();
    derived1.Hi();
    derived1.Mew();
    //The code doesnt have runtime polymorphism/virtual func/overriding or anything
    Base *baseptr1;
    baseptr1 = &derived1;
    cout<<endl;
    (*baseptr1).Hi();
    baseptr1->Mew();
    //This doesnt work, cuz we havent used virtual func....
    // gives error baseptr1.Hi();
    derived1.Hi();
    derived1.Mew();

    base1 = derived1;
    cout<<endl;
    base1.Hi();
    base1.Mew();
    derived1.Hi();
    derived1.Mew();
}