#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;

class student{

private:
    int mark,roll;
    string name;
public:

    student(string _name,int _roll, int _mark)
    {
        name = _name;
        roll =_roll;
        mark = _mark;

    }
    string getname(){
        return name;
    }
    int getroll(){
        return roll;
    }
    int getmark(){
        return mark;
    }
    void display(){

        cout<<"Name: "<<getname()<<endl<<"Roll: "<<getroll()<<endl<<"Mark: "<<getmark()<<endl;
    }

};

int main(){
    string nme[3];
    int rll[3];
    int mrk[3];
    for(int i = 0 ;i<3 ; i++){
        cout<<"Enter info of student "<<i+1<<endl<<"Name: ";
        cin>>nme[i];
        cout<<"Roll: ";
        cin>>rll[i];
        cout<<"Marks: ";
        cin>>mrk[i];
    }
    student s1(nme[0],rll[0],mrk[0]);
    student s2(nme[1],rll[1],mrk[1]);
    student s3(nme[2],rll[2],mrk[2]);
    cout<<"Student Info:"<<endl;
    s1.display();
    s2.display();
    s3.display();
    
}