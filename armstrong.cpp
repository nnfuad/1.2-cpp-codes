#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    int n1,n2=0;
    cin>>n1;
    int n3=n1;
    while(n1>0)
    {
        int rem = n1%10;
        n2 = n2+pow(rem,3);
        n1/=10;

    }
    if(n3 ==n2) cout<<"armstrong"<<endl;
    else cout<<"Not armstrong"<<endl;
}