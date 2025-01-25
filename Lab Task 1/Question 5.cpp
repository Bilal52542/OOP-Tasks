#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(int argc,char *argv[]){
    cout<<fixed<<setprecision(2);
    int name_length=argc-6;
    int a_sold=stoi(argv[name_length+3]),c_sold=stoi(argv[name_length+4]);
    float a_price=stof(argv[name_length+1]),c_price=stof(argv[name_length+2]),donate=stof(argv[name_length+5]);
    float gross=(a_sold*a_price)+(c_sold*c_price);
    string name="";
    for(int i=1;i<=name_length;i++){
        name+=argv[i];
        if(i!=name_length) name+=" ";
    }
    cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"<<endl;
    cout<<"Movie Name:...................................."<<name<<endl;
    cout<<"Number of Tickets Sold:.........................."<<a_sold+c_sold<<endl;
    cout<<"Gross Amount:.........................................$"<<gross<<endl;
    cout<<"Percentage of Gross Amount Donated:"<<donate<<"%"<<endl;
    cout<<"Amount Donated:...................................$"<<(donate/100)*gross<<endl;
    cout<<"Net Sale:...................................................$"<<gross-((donate/100)*gross)<<endl;
return 0;
}