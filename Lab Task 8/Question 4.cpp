#include<iostream>
#include<vector>
using namespace std;

class Person{
public:
    string name,id,address,phoneNumber,email;
    Person(string n,string i,string a, string p, string e):name(n),id(i),address(a),phoneNumber(p),email(e){}
    void displayInfo(){
        cout<<"Name: "<<name<<"\nID: "<<id<<"\nAddress: "<<address<<"\nPhone: "<<phoneNumber<<"\nEmail: "<<email<<endl;
    }
    void updateInfo(string n,string i,string a, string p, string e){
        name=n;id=i;address=a;phoneNumber=p;email=e;
    }
};

class Student : public Person{
public:
    string courseEnrolled;
    float gpa;
    int enrollmentYear;
    void displayInfo(){
        cout<<"Name: "<<name<<"\nID: "<<id<<"\nAddress: "<<address<<"\nPhone: "<<phoneNumber<<"\nEmail: "<<email<<endl;
        cout<<"Course: "<<courseEnrolled<<"\nGPA: "<<gpa<<"\nEnrollment Year: "<<enrollmentYear<<endl;
    }
};

class Professor : public Person{
    string deparment,courseTaught;
    int salary;
public:
    void displayInfo(){
        cout<<"Name: "<<name<<"\nID: "<<id<<"\nAddress: "<<address<<"\nPhone: "<<phoneNumber<<"\nEmail: "<<email<<endl;
        cout<<"Deparment: "<<deparment<<"\nCourse Taught: "<<courseTaught<<"\nSalary: "<<salary<<endl;
    }
};
class Staff : public Person{
    string department,position;
    int salary;
public:
    void displayInfo(){
        cout<<"Name: "<<name<<"\nID: "<<id<<"\nAddress: "<<address<<"\nPhone: "<<phoneNumber<<"\nEmail: "<<email<<endl;
        cout<<"Department: "<<department<<"\nPosition: "<<position<<"\nSalary: "<<salary<<endl;
    }
};
class Course : public Professor, public Student{
    int courseId,credits;
    string courseName,instructor,schedule;
    vector<string>students;
public:
    void registerStudent(const Student& student){
        students.push_back(student.name);
        cout<<"Student registered";
    }
    void calculateGrades(){
        cout<<"Grades calculated for "<<courseName<<endl;
    }
    void display(){
        cout<<"Course ID: "<<courseId<<"\nCourse Name: "<<courseName<<"\nCredits: "<<credits<<"\nInstructor: "<<instructor<<"\nSchedule: "<<schedule<<"\nRegistered Students: ";
        for(string s:students)cout<<s<<" ";
        cout<<endl;
    }
};
int main(){

return 0;
}