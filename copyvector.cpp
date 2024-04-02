//we do that with new_vector(old_vector.begin(),old_vector.end());

//AT INITIALIZING or later...


#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n1(10,453);
    vector<int> n2(n1.begin(),n1.end());
    for(int i = 0; i<n2.size();i++)
        {
        cout<<n2[i]<<endl;
        }
}