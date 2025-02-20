#include<iostream>
using namespace std;
class Invoice{
    string partNum,desc;
    int qty;
    double price;
public:
    Invoice(string p, string d, int q, double pr) : partNum(p), desc(d), qty(q), price(pr){}
    double getInvoiceAmount() {
        return qty * price;
    }
};
int main(){
    class Invoice Invoice("1234","Screwdriver",10,15.25);
    cout<<"Total invoice amount : "<<Invoice.getInvoiceAmount();
}
