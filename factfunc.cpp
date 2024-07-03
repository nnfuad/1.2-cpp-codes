#include <iostream>
using namespace std;

int fact(int n)
{   
    int fact=1;
    if(n == 0 || n==1) return 1;
    else{
         for(int i=2 ; i<=n ;i++)
    {
        fact*=i;
    }
    }
    return fact;
}

int main()
{
    int a;
    cin>>a;
    cout<<"Factorial of "<<a<<" is "<<fact(a)<<endl;
}