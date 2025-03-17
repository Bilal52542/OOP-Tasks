#include<iostream>
#include<string>
using namespace std;

class Student{
protected:
	int id;
	string name;
public:
	Student():id(0),name(""){}
	Student(int ID,string n):id(ID),name(n){}
	string getName(){return name;}
	int getId(){return id;}
	void setStudent(){
		cout<<"Enter Name: ";
		cin>>name;
		cout<<"Enter ID: ";
		cin>>id; 	
	}
	void infoDisplay(){
		cout<<"Name: "<<name<<endl;
		cout<<"ID: "<<id<<endl;
	}
};

class Marks: public Student{
protected:
	int marks_OOP,marks_DS,marks_PF,marks_DB;
public:
	Marks():marks_OOP(0),marks_DS(0),marks_PF(0),marks_DB(0){}
	Marks(int ID,string n,int o,int ds,int pf,int db):Student(ID,n),marks_OOP(o),marks_DS(ds),marks_PF(pf),marks_DB(db){}
	void setMarks(int o,int ds,int pf,int db){
		marks_OOP=o;
		marks_DS=ds;
		marks_PF=pf;
		marks_DB=db;
	}
	void getMarks(){
		cout<<"Marks in OOP: "<<marks_OOP<<endl;
		cout<<"Marks in DS: "<<marks_DS<<endl;
		cout<<"Marks in PF: "<<marks_PF<<endl;
		cout<<"Marks in DB: "<<marks_DB<<endl;
	}
};

class Result: public Marks{
private:
	int total;
	double average;
public:
	void display(){
		infoDisplay();
		getMarks();
		total=marks_OOP+marks_DS+marks_PF+marks_DB;
		cout<<"Total Marks: "<<total<<endl;
		average=total/4.0;
		cout<<"Average Marks: "<<average<<"%"<<endl;
	}
};

int main(){
	Result r;
	r.setStudent();
	r.setMarks(55,65,72,81);
	cout<<endl;
	r.display();
	
	return 0;
}
