//rhombus with numbers

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-i ;j++)
        {
            cout<<" ";
        }
        for(int k=1 ; k<=5 ;k++)
        {
            cout<<k;
        }
        cout<<endl;
    }

}