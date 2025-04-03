#include<iostream>
using namespace std;

class Account{
protected:
    int accountNumber;
    double balance;
    string accountHolderName;
public:
    Account(int accNo,double bal,string name):accountNumber(accNo),balance(bal),accountHolderName(name){}
    virtual void deposit(double amount){balance+=amount;}
    virtual bool withdraw(double amount){if(amount>balance)return false;balance-=amount;return true;}
    virtual double calculateInterest() const {return 0;}
    virtual void printStatement() const {cout<<"Account:"<<accountNumber<<"\nBalance:"<<balance<<"\n";} 
    virtual void getAccountInfo() const {cout<<"Holder:"<<accountHolderName<<endl;}
    virtual ~Account(){}
};

class SavingsAccount:public Account{
    double interestRate,minimumBalance;
public:
    SavingsAccount(int accNo,double bal,string name,double rate,double minBal)
    :Account(accNo,bal,name),interestRate(rate),minimumBalance(minBal){}

    double calculateInterest() const override {return balance*(interestRate/100);}
    
    bool withdraw(double amount) override {
        if(balance-amount<minimumBalance) return false;
        balance-=amount;
        return true;
    }

    void printStatement() const override {
        cout<<"Savings Account:"<<accountNumber<<"\nBalance:"<<balance
            <<"\nInterest:"<<calculateInterest()<<"\n";
    }
};

class CheckingAccount:public Account{
public:
    CheckingAccount(int accNo,double bal,string name):Account(accNo,bal,name){}
};

class FixedDepositAccount:public Account{
    double fixedInterestRate;
    int maturityDate;
public:
    FixedDepositAccount(int accNo,double bal,string name,double rate,int maturity)
    :Account(accNo,bal,name),fixedInterestRate(rate),maturityDate(maturity){}

    double calculateInterest() const override {return balance*(fixedInterestRate/100);}

    void printStatement() const override {
        cout<<"Fixed Deposit:"<<accountNumber<<"\nBalance:"<<balance
            <<"\nInterest:"<<calculateInterest()<<"\nMaturity:"<<maturityDate<<"\n";
    }

    bool withdraw(double) override {return false;}
};

int main(){
    SavingsAccount sa(101,5000,"Alice",5.0,1000);
    CheckingAccount ca(102,3000,"Bob");
    FixedDepositAccount fda(103,10000,"Charlie",7.0,2027);

    sa.deposit(1000);
    sa.withdraw(4500);
    sa.printStatement();

    ca.withdraw(2000);
    ca.printStatement();

    fda.printStatement();
return 0;
}
