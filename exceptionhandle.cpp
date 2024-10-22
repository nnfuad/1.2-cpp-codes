#include <iostream>
using namespace std;


int main() {
    
    try{

    int a,b ;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    if(b==0){
        throw -1;
    }
    double result = (double) a/b;
    cout<<"Division is : "<<result<<endl;

    }
    catch (int x){
        cout<<"Division by 0 isnt possible...\nexiting..."<<endl;
    }
    return 0;

}