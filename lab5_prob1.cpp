#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

class car1
{
private:
    int speed=350;
    string name="Supra";
public:
    int getSpeed()
    {
        return speed;
    }
public:
    string getName()
    {
        return name;
    }
};

class car2
{
private:
    int speed=300;
    string name="Mercedes";
public:
    int getSpeed()
    {
        return speed;
    }
public:
    string getName()
    {
        return name;
    }
};

class car3
{
private:
    int speed=400;
    string name="Tesla";
public:
    int getSpeed()
    {
        return speed;
    }
public:
    string getName()
    {
        return name;
    }
};
int main()
{
    car1 ob1;
    car2 ob2;
    car3 ob3;
    if(ob1.getSpeed()>ob2.getSpeed()&&
    ob1.getSpeed()>ob3.getSpeed()){
        cout<<"The fastest car is: "<<ob1.getName()<<endl;
    }
    else if(ob2.getSpeed()>ob1.getSpeed()&&
    ob2.getSpeed()>ob3.getSpeed()){
        cout<<"The fastest car is: "<<ob2.getName()<<endl;
    }
    else{
         cout<<"The fastest car is: "<<ob3.getName()<<endl;
    }
    return 0;
}
