#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Point{
    int x,y;
public:
    friend void dist(Point &a,Point &b);
    Point();
    Point(int a);
};
Point::Point(){
    x=0;
    y=0;
}
Point::Point(int a){
    x=a;
    y=0;
}

int main(){
    
}