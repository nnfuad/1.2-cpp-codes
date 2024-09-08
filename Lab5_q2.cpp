#include <iostream>
#include <string>
using namespace std;

class Department{
private:

    int roll;
    string name;
    string dept;
    int age;
    int series;

public:

    void setname(string _name){
        name = _name;
    }
    void setroll(int _roll){
        roll = _roll;
    }
    void setdept(string _dept){
        dept = _dept;
    }
    void setseries(int _series){
        series = _series;
    }
    void setage(int _age){
        age = _age;
    }

    string getname(){
        return name;
    }
    int getseries(){
        return series;
    }
    int getage(){
        return age;
    }
    string getdept(){
        return dept;
    }
    int getroll()
    {
        return roll;
    }

    void print(){

    cout<<roll<<" "<<name<<endl;
    }




};

int main()
{
    Department ECE1;
    ECE1.setname("Fuad");
    ECE1.setroll(2210032);
    ECE1.setdept("ECE");
    ECE1.setage(20);
    ECE1.setseries(22);
    cout<<"Department name: "<<ECE1.getdept()<<endl;
    cout<<"Name: "<<ECE1.getname()<<endl;
    cout<<"Roll: "<<ECE1.getroll()<<endl;
    cout<<"Series: "<<ECE1.getseries()<<endl;
    cout<<"Age: "<<ECE1.getage()<<endl;
}
