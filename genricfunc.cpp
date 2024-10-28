#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

template <typename T>

T add(T a , T b){
    return a+b;
}

int main(){
    int a=5;
    double b=4;
    // T c=3;
    // T d=4;
    //cout<<add(4,4.5)<<endl;
    //cout<<add(a,b)<<endl;
    cout<<add(a,a)<<endl;
    cout<<add(4,a)<<endl;
    cout<<add(4.1,b)<<endl;
    

}