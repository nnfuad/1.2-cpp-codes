#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int num;
    cout<<"Input Marks: ";
    cin>>num;

    switch (num/10){
    case 3:
            cout<<"F"<<" Grade"<<endl<<"CGPA: 0.00"<<endl;
            break;

    case 4:
            cout<<"C"<<" Grade"<<endl<<"CGPA: 2.00"<<endl;
            break;
    
    case 5:
            cout<<"B"<<" Grade"<<endl<<"CGPA: 2.50"<<endl;
            break;
    
    case 6:
            cout<<"A-"<<" Grade"<<endl<<"CGPA: 3.00"<<endl;
            break;

    case 7:
            cout<<"A"<<" Grade"<<endl<<"CGPA: 3.50"<<endl;
            break;

    case 8:
            cout<<"A+"<<" Grade"<<endl<<"CGPA: 4.00"<<endl;
            break;

    case 9:

            cout<<"A+"<<" Grade"<<endl<<"CGPA: 4.00"<<endl;
            break;

    case 10:

            cout<<"A+"<<" Grade"<<endl<<"CGPA: 4.00"<<endl;
            break;

    }

    return 0;
}
