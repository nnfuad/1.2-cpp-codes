#include <iostream>
using namespace std;
    
int main()
{
    int n,fact=1;
    cin>>n;
   if(n == 0 || n==1) cout<<1;
    else{
         for(int i=2 ; i<=n ;i++)
    {
        fact*=i;
    }
    }
    cout<<fact<<endl;
    
}