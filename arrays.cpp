#include <iostream>
using namespace std;
int main()
{
    extern int arr1[];              //HERE IT IS A DECLARATION ..
                                    // AFTER COMPILATION IT WORKS USING LINKER
    
    
    //int arr2[];                   //IT IS A DEFINITION, NOT ALLOWED
    int arr3[24];
    int a=2;
    int arr4[3*a];
    cout<<sizeof(arr4)<<endl;
    for(int i=1;i<=4;i++){
        a++;
    }
    //int arr4[3*a];//not allowed
    cout<<sizeof(arr4)<<endl;
    int arr5[]={1,2,3,4,56,-2};

    int arr6[100]={0};// ALL ELEMENTS SET TO O... arr7[100]={1}// NOT SET TO 1.. :(
    cout<<arr6[34]<<endl;


//  #Method 1:
// int arr[20];
// for (int i = 0; i < 20; ++i) {
//     arr[i] = 1;
// }

// #Method 2:

//     int arr[20];
//     std::fill_n(arr, 20, 1); // Set first 20 elements to 1
//     return 0;
// }


    
}