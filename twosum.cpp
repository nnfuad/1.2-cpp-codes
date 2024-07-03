#include <iostream>
using namespace std;

int main()
{
    int n,target;
    cout<<"How long do you want the array to be?(in elements): "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the target: ";
    cin>>target;
    cout<<"Enter the elements:"<<endl;
    for(int i = 0 ; i<n ; i++)
    {
        cout<<(i+1)<<"th Element: ";
        cin>>arr[i];
    }
    for(int i=0 ; i<n ;i++)
    {
        for(int j=i+1 ; j<n ;j++)
        {
            if(i==n) break;

                if(target == arr[i]+arr[j]){
                cout<<i+1<<" and "<<j+1<<" element"<<endl;
                
                }
                else cout <<"no case"<<endl;
            
        }
    }
}