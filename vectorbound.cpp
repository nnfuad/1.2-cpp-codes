//bound checking error will show if you use :
//         vectorname.at(element_no)
//SO BASICALLY .at() function...

//.back() to access last element

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n1={1,2,3,4,5,6,7,8,9,10};
    cout<<"Element at 0 is "<<n1[0]<<endl;
    cout<<"Element at 0 is "<<n1.at(0)<<endl;
    //cout<<"Element at 0 is "<<n1.at(11)<<endl;  *******   WILL GIVE AN ERROR,also at(10) cuz 0to9=10 :)  **********
    cout<<" last element: "<<n1.back()<<endl;
}