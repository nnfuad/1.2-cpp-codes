#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <thread>
using namespace std;

void func1(){
    for(int i = 0 ; i<100 ; i++)
    cout<<"Nafis ";

}
void func2(){
    for(int i = 0 ; i<100 ; i++)
    cout<<"Ramin ";
}

int main(){
    thread work1(func1);
    thread work2(func2);
    work1.join();
    work2.join();
}