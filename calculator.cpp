#include <iostream>
using namespace std;

int main()
{
    char sign;
    cout<<"What operation so you want to perform? :( + | - | * | / )"<<endl;
    cin>>sign;
    if(sign =='+'||sign =='-'||sign =='*'||sign =='/')
    {
        if(sign == '+')
        {
            cout<<"How many numbers do you want to add?"<<endl;
            int a;
            float sum=0;
            cin>>a;
            float arr[a];
            cout<<"Enter the numbers:"<<endl;
            for(int i= 0 ;i<a ;i++){
                cin>>arr[i];
                sum+=arr[i];
                
            }
            cout<<"Sum is "<<sum<<endl;
        }
        else if(sign == '-')
        {
            float a,b;
            cout<<"Enter First number: ";
            cin>>a;
            cout<<"Enter Second number: ";
            cin>>b;
            float ded=a-b;
            cout<<"Result is: "<<ded<<endl;
        }
        else if(sign == '*')
        {
            cout<<"How many numbers do you want to multiply?"<<endl;
            int a;
            float mul=1;
            cin>>a;
            float arr[a];
            cout<<"Enter the numbers:"<<endl;
            for(int i= 0 ;i<a ;i++){
                cin>>arr[i];
                mul*=arr[i];
                
            }
            cout<<"Multiplication result is "<<mul<<endl;
        }
        if(sign == '/')
        {
            float a,b;
            cout<<"Enter First number: ";
            cin>>a;
            cout<<"Enter Second number: ";
            cin>>b;
            if(b== 0) cout<<"Can't be divided with 0"<<endl;
            else
            { 
            float div=a/b;
            cout<<"Division Result is: "<<div<<endl;
            }
        }
    }
    else cout<<"Invalid Operator"<<endl;

}