#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Base{
    public:
    string name = "nafis";
    Base(){
        cout<<"Base class constructor"<<endl;
    }
    ~Base(){
        cout<<"Base class destructor"<<endl;
    }
    string namef(){
        cout<<"nafis"<<endl;
    }
};

class Derived1: public Base{
    public:
    string name = "nur";
    Derived1(){
        cout<<"Derived1 class constructor"<<endl;
    }
    ~Derived1(){
        cout<<"Derived1 class destructor"<<endl;
    }
    string namef(){
        cout<<"nur"<<endl;
    }

};

class Derived2: public Base{
    public:
    string name = "siyam";
    Derived2(){
        cout<<"Derived2 class constructor"<<endl;
    }
    ~Derived2(){
        cout<<"Derived2 class destructor"<<endl;
    }
    string namef(){
        cout<<"siyam"<<endl;
    }
};

class  supDerived: public Derived1, public Derived2{
    public:
    string name = "Called the grand var";
    supDerived(){
        cout<<"supDerived class constructor"<<endl;
    }
    ~supDerived(){
        cout<<"supDerived class destructor"<<endl;
    }
    string namef(){
        cout<<"grandVar"<<endl;
    }
};

int main(){
    Base* baseptr ;
    //cout<<grand->name<<endl;
    supDerived grandy;
    cout<<endl;
    Derived1 d1;
    cout<<grandy.name<<endl;
    cout<<endl;
    baseptr = &(d1);
    baseptr->namef();

}