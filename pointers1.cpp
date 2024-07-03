//Pointers in Cpp 1
//'&' -> to refer to an address of a memory location
//POINTER HOLDS ADDRESS
//'*' -> to dereference(BASICALLY MEANS SHOWING THE VALUE AT ADDRESS) the pointer

#include <iostream>
using namespace std;
int main()
{
    int a=5;
    cout<<&a<<endl;
    int *ptr= &a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    return 0;
}