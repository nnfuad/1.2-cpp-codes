//Overload constructor :
//WHEN you want to POPULATE THE VECTOR with SAME VALUE

//declaration:   vector<data_type>vector_name(SIZE,VALUE)
//also you can use fill() like in the code below...

#include <iostream>
#include <vector>
using namespace std;
 int main()
 {
    /*  vector<char> alphabetaaa(5,'a');
        for(int i = 0; i<alphabetaaa.size();i++){
        cout<<alphabetaaa[i]<<endl;
    }*/
    vector<char> alphabetaaa(10);
    fill(alphabetaaa.begin(),alphabetaaa.end(),'F');
        for(int i = 0; i<alphabetaaa.size();i++)
        {
        cout<<alphabetaaa[i]<<endl;
        }
 }