#include <iostream>
#include <string>
using namespace std;

class student{

private:
    int mark,roll;
    string name;
public:
    friend void Teacher(student &st1, student &st2, student &st3);
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
void Teacher(student &st1,student &st2,student &st3){

    float avg = (float)(st1.mark+st2.mark+st3.mark)/3.0;

    if(st1.getmark()>st2.getmark() && st1.getmark()>st3.getmark()){
            cout<<"Highest Mark was achieved by "<<st1.getroll()<<endl;
    }
    if(st2.getmark()>st1.getmark() && st2.getmark()>st3.getmark()){
            cout<<"Highest Mark was achieved by "<<st2.getroll()<<endl;
    }
    if(st3.getmark()>st2.getmark() && st3.getmark()>st1.getmark()){
            cout<<"Highest Mark was achieved by "<<st3.getroll()<<endl;
    }
    // lowest mark
    if(st1.getmark()<st2.getmark() && st1.getmark()<st3.getmark()){
            cout<<"Lowest Mark was achieved by "<<st1.getroll()<<endl;
    }
    if(st2.getmark()<st1.getmark() && st2.getmark()<st3.getmark()){
            cout<<"Lowest Mark was achieved by "<<st2.getroll()<<endl;
    }
    if(st3.getmark()<st2.getmark() && st3.getmark()<st1.getmark()){
            cout<<"Lowest Mark was achieved by "<<st3.getroll()<<endl;
    }

    //avg
    cout<<"Average Number is: "<<avg<<endl;

}

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
    Teacher(s1,s2,s3);

}