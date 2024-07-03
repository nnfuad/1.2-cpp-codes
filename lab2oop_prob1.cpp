#include <iostream>
#include <string.h>
using namespace std;

class car{
    public:
    static string milage,model,brand,color;
   
    void display(){
        cout<<"Milage: "<<milage<<"Model: "<<model<<"Brand Name: "<<brand<<"Color: "<<color<<endl;
    }
}

int main()

{
        car c1[10];
        for(int i =0 ; i<10 ;i++){
        cout<<"Enter Info for car "<<i+1<<endl;
        cout<<"Brand name: ";
        cin>>c1[i].brand;
        cout<<"Model name: ";
        cin>>c1[i].model;
        cout<<"Milage: ";
        cin>>c1[i].milage;
        cout<<"Color: ";
        cin>>c1[i].color;

       }
       for(int i = 0 ; i<10 ; i++){
        cout<<"Info for car "<<i+1<<endl;
        c1[i].display();
       }
    
}