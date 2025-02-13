#include <iostream>
using namespace std;

class Employee {
public:
    string firstName,lastName;
    double monthlySalary;

    Employee(string fName, string lName, double salary){
        firstName=fName;
        lastName=lName;
        monthlySalary=(salary>0)?salary : 0.0;
    }

    double getYearlySalary(){
        return monthlySalary*12;
    }

    void giveRaise(){
        monthlySalary+=monthlySalary*(10/100);
    }
};

int main() {
    Employee emp1("Bilal", "Ahmed", 3000);
    Employee emp2("Ahmed", "Khan", 4000);
    
    cout<<"Yearly Salary of "<<emp1.firstName<<" "<<emp1.lastName<<": $"<<emp1.getYearlySalary()<<endl;
    cout<<"Yearly Salary of "<<emp2.firstName<<" "<<emp2.lastName<<": $"<<emp2.getYearlySalary()<<endl;
    emp1.giveRaise();
    emp2.giveRaise();
    cout<<"After 10% raise:"<<endl;
    cout<<"Yearly Salary of "<<emp1.firstName<<" "<<emp1.lastName<<": $"<<emp1.getYearlySalary()<<endl;
    cout<<"Yearly Salary of "<<emp2.firstName<<" "<<emp2.lastName<<": $"<<emp2.getYearlySalary()<<endl;
    return 0;
}
