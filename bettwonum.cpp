#include <iostream>
using namespace std;

void number(int a,int b){
    for(int i=a ; i<=b ; i++)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}

int main()
{
    int k,l;
    cin>>k>>l;
    number(k,l);
}