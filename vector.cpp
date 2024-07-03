//STL stands for Standard Template Library,
// a collection of reusable components like containers, algorithms, and iterators 
//in C++ that simplify programming tasks by providing ready-to-use implementations of common data structures and algorithms.


// Vectors are one of the container classes provided by the Standard Template Library (STL) in C++.
// They are dynamic arrays that can resize themselves automatically when elements are inserted or removed. 
// Vectors provide efficient random access to elements, fast insertion and deletion at the end, and support various operations like iteration, sorting, and searching.
// They are commonly used when a flexible, resizable array-like data structure is needed in C++ programs.
// declaration : if not using namespace std:    std::vector<data_type> vector_name;
//               if using namespace std:        vector<data_type> vector_name;
//Add elements to the vector:
//                               vec.push_back(10);
//                               vec.push_back(20);
//                               vec.push_back(30);

// size oprator:                 vector_name.size();

//capacity and size operator is different...
//CAPACITY actually doubles the the time you insert an element...
//capacity operator:             vector_name.capacity();



#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int val;
    vector<int> numbers;//or you could specify the number of elements...//or, vector<int> numbers={1,2,3,4,5,6,7}
    numbers.push_back(1);
    numbers.push_back(2);
    cout<<numbers[0];
    for(int i = 0 ; i<3 ; i++)
    {
        cin>>val;
        numbers.push_back(val);
    }
    for(int i = 0 ; i<6 ; i++)
    {
        cout<<numbers[i];
    }
    

}