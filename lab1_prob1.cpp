#include <iostream>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a>=0 && a<40){
        cout<<"Failed"<<endl;
    }
    else if(a>=40 && a<45){
        cout<<"D"<<endl;
    }
    else if(a>=45 && a<50){
        cout<<"C"<<endl;
    }
    else if(a>=50 && a<55){
        cout<<"C+"<<endl;
    }
    else if(a>=55 && a<60){
        cout<<"B-"<<endl;
    }
    else if(a>=60 && a<65){
        cout<<"B"<<endl;
    }
    else if(a>=65 && a<70){
        cout<<"B+"<<endl;
    }else if(a>=70 && a<75){
        cout<<"A-"<<endl;
    }else if(a>=75 && a<80){
        cout<<"A"<<endl;
    }else if(a>=80 && a<=100){
        cout<<"A+"<<endl;
    }
    else cout<<"Invalid number"<<endl;

}