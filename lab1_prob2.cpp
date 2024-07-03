#include <iostream>
using namespace std;

int fib(int a){
    if(a == 1) return 1 ;
    if(a==2) return 2;

    return fib(a-1) + fib(a-2);
}

int main(){
    int a;
    cin>>a;
    cout<<1<<" ";
    for(int i =1 ; i<a ;i++){
    cout<<fib(i)<<" ";

    }
    cout<<endl;
}