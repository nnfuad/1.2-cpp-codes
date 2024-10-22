#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class coord{
    private:
    int x,y;
    public:
    int xgetter(){
        return x;
        }
    int ygetter(){
        return y;
        }
    coord(int x1,int y1):  x(x1) , y(y1){};
    coord operator+(coord const &other);

};

coord coord::operator+(coord const &other){
    return coord(this->x + other.x , this->y  + other.y);
}

int main(){
    coord x1(1,2),x2(2,3);
    x1  = x1+x2;
    cout<<"(x,y)=("<<x1.xgetter()<<","<<x1.ygetter()<<")"<<endl;

}