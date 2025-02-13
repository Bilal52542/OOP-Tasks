#include<iostream>
#include<string>
using namespace std;
struct employee {
    string emp_id;
    string name;
    int salary;
};
struct organization {
    string org_name;
    int org_number;
    employee emp;
};
int main() {
    organization org;
    org.emp.emp_id = "NUFAST123ABC";
    org.emp.name = "Linus Sebastian";
    org.emp.salary = 400000;
    org.org_name = "NU-Fast";
    org.org_number = 127;

    cout<<"Organisation Name: "<<org.org_name<<endl;
    cout<<"Organisation Number: "<<org.org_number<<endl;
    cout<<"Employee Id: "<<org.emp.emp_id<<endl;
    cout<<"Employee name: "<<org.emp.name<<endl;
    cout<<"Employee Salary: "<<org.emp.salary<<endl;
    return 0;
}