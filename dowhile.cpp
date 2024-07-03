#include <iostream>
using namespace std;
int main(){
    char ch;
    do{
        int l,b,area;
        cout<<"Enter length and width separated by a space"<<endl;
        cin>>l>>b;
        area = l*b;
        cout<<"Area is : "<<area<<endl;
        cout<<"Want to continue calculating?(Y/N)"<<endl;
        cin>>ch;
    }
    while(ch == ('Y' || 'y'));
    
}