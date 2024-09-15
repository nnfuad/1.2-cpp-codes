#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Car{
public:
    int speed(int maxSpeed);
};
int speed(int maxSpeed){
    return maxSpeed;
}

int main(){
    Car myObj;
    cout<<myObj.speed(200)<<endl;
    return 0;
}