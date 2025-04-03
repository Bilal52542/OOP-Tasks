#include<iostream>
using namespace std;

class Currency{
protected:
    double amount,exchangeRate;
    string currencyCode,currencySymbol;
public:
    Currency(double amt,string code,string symbol,double rate):amount(amt),currencyCode(code),currencySymbol(symbol),exchangeRate(rate){}
    virtual double convertToBase(){return amount*exchangeRate;}
    virtual double convertTo(double targetRate){return convertToBase()/targetRate;}
    virtual void displayCurrency(){cout<<currencySymbol<<amount<<" ("<<currencyCode<<")"<<endl;}
    virtual ~Currency(){}
};

class Dollar:public Currency{
public:
    Dollar(double amt):Currency(amt,"USD","$",1.0){}
    double convertToBase(){return amount;}
    void displayCurrency(){cout<<"USD "<<currencySymbol<<amount<<endl;}
};

class Euro:public Currency{
public:
    Euro(double amt):Currency(amt,"EUR","€",1.1){}
    double convertToBase(){return amount*exchangeRate;}
    void displayCurrency(){cout<<"EUR "<<currencySymbol<<amount<<endl;}
};

class Rupee:public Currency{
public:
    Rupee(double amt):Currency(amt,"INR","₹",0.012){}
    double convertToBase(){return amount*exchangeRate;}
    void displayCurrency(){cout<<"INR "<<currencySymbol<<amount<<endl;}
};

int main(){
    Dollar d(100);
    Euro e(100);
    Rupee r(1000);

    d.displayCurrency();
    e.displayCurrency();
    r.displayCurrency();

    cout<<"100 EUR in USD: "<<e.convertTo(1.0)<<endl;
    cout<<"1000 INR in USD: "<<r.convertTo(1.0)<<endl;
return 0;
}
