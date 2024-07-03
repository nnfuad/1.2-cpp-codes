// size oprator:                 vector_name.size();

//capacity and size operator is different...
//CAPACITY actually doubles the the time you insert an element...
//capacity operator:             vector_name.capacity();




#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> numbers;
    numbers.push_back(1);
    cout<<"capacity: "<<numbers.capacity()<< " Size: "<<numbers.size()<<endl;
    numbers.push_back(2);
    cout<<"capacity: "<<numbers.capacity()<< " Size: "<<numbers.size()<<endl;
    numbers.push_back(2);
    cout<<"capacity: "<<numbers.capacity()<< " Size: "<<numbers.size()<<endl;
    for(int i=0 ; i<17 ;i++)
    {
        numbers.push_back(2);
    cout<<"capacity: "<<numbers.capacity()<< " Size: "<<numbers.size()<<endl;
    }
} 
