#include<iostream>
using namespace std;
class Account{
    double balance;
public:
    Account(double b) : balance(b){}
    void credit(double amt){
        balance+=amt;
    }
    void debit(double amt){
        if (amt<=balance) balance-=amt;
    }
    double getBalance(){
        return balance;
    }
};

int main(){
    double initialBalance;
    cout<<"Enter initial balance: ";
    cin>>initialBalance;

    Account myAccount(initialBalance);
    double amount;

    cout<<"Enter amount to credit: ";
    cin>>amount;
    myAccount.credit(amount);
    cout<<"Balance after credit: "<<myAccount.getBalance()<<endl;

    cout<<"Enter amount to debit: ";
    cin>>amount;
    myAccount.debit(amount);
    cout<<"Balance after debit: "<< myAccount.getBalance()<<endl;
return 0;
}
