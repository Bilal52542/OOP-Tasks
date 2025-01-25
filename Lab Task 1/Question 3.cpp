#include <iostream>
#include<string>
using namespace std;
int main(int argc,char* argv[]){
    float bill=0,charge;
    int id=stoi(argv[1]),unit=stoi(argv[3]);
    string name=argv[2];
    if(unit<200){
        bill+=16.20*unit;
        charge=16.20;
    }else if(unit>=200 && unit<300){
        bill+=20.10*unit;
        charge=20.10;
    }else if(unit>=300 && unit<500){
        bill+=27.10*unit;
        charge=27.10;
    }else if(unit>500){
        bill+=35.90*unit;
        charge=35.90;
    }
    cout<<"Customer ID: "<<id<<endl<<"Customer Name: "<<name<<endl<<"Units consumed: "<<unit<<endl;
    cout<<"Amount Charges @"<<charge<<" per unit: "<<bill<<endl;
    if(bill>18000){
        cout<<"Surcharge Amount : "<< 0.15*bill<<endl;
        bill+=0.15*bill;
        cout<<"Net Amount Paid by the Customer: "<<bill<<endl;
    }
return 0;
}