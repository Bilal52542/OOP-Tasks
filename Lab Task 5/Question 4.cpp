#include<iostream>
using namespace std;

class Student{
    const string roll_no;
    public:
    Student():roll_no("24K-0777"){}
    
    void display(){
        cout<<"\nRoll Number : "<<roll_no<<endl;
    }
    void change_value(){
        string roll;
        cout<<"New Roll Number : ";
        cin>>roll;
        string *ptr=(string*)&roll_no;    
        *ptr=roll;
    }
};
int main(){
    Student student;
    student.display();
    student.change_value();
    student.display();
return 0;
}