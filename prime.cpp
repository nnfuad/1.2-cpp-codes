#include <iostream>
using namespace std;

int main()
{
    int n,flag=0;
    cin>>n;
    for(int i=2 ; i<n ; i++){
        if(n%i == 0) 
        {
        flag=1;
        break;
        }
    }
    if(flag==1) cout<<n<<" is not a prime number"<<endl;
    else cout<<n<<" is a prime number"<<endl;
}