#include<iostream>
#include<algorithm>
using namespace std;

struct MenuItem{
    string name;
    double price;
    string type;
};
class CoffeeShop{
    public:
    const string name;
    string orders[10]={""};
    MenuItem menu[5]={
        {"Cappuccino",3.5,"drink"},
        {"Frappuccino",4.0,"drink"},
        {"Espresso",2.0,"drink"},
        {"Croissant",2.5,"food"},
        {"Sandwich",5.0,"food"}
    };
    CoffeeShop(string n):name(n){}


    string addOrder(string item){
        for(auto& m:menu){
            if(m.name==item){
                for(int i=0;i<10;i++){
                    if(orders[i]==""){
                        orders[i]=item;
                        return "Order Added!";
                    }
                }
                return "Order List Is Full!";
            }
        }
        return "This item is currently unavailable!";
    }
    string fulfillOrder(){
        for(int i=0;i<10;i++){
            if(orders[i]!=""){
                string ready=orders[i];
                orders[i]="";
                return "The "+ready+" is ready!";
            }
        }
        return "All orders have been fulfilled";
    }
    void listOrders(){
        bool empty=true;
        for(auto& o:orders){
            if(o!=""){
                cout<<o<<endl;
                empty=false;
            }
        }
        if(empty) cout<<"No orders!"<<endl;
    }
    double dueAmount(){
        double total=0;
        for(auto& o:orders){
            for(auto& m:menu){
                if(o==m.name) total+=m.price;
            }
        }
        return total;
    }
    string cheapestItem(){
        MenuItem* cheapest=&menu[0];
        for(auto& m:menu){
            if(m.price<cheapest->price) cheapest=&m;
        }
        return cheapest->name;
    }
    void drinksOnly(){
        for(auto& m:menu){
            if(m.type=="drink") cout<<m.name<<endl;
        }
    }
    void foodOnly(){
        for(auto& m:menu){
            if(m.type=="food") cout<<m.name<<endl;
        }
    }
};

int main(){
    CoffeeShop shop("Fast Coffee");
    
    cout<<shop.addOrder("Cappuccino")<<endl;
    cout<<shop.addOrder("Sandwich")<<endl;
    cout<<shop.addOrder("Burger")<<endl;
    
    shop.listOrders();
    cout<<"Total Due: $"<<shop.dueAmount()<<endl;
    
    cout<<shop.fulfillOrder()<<endl;
    cout<<shop.fulfillOrder()<<endl;
    cout<<shop.fulfillOrder()<<endl;

    cout<<"Cheapest Item: "<<shop.cheapestItem()<<endl;
    
    cout<<"Drinks Menu:"<<endl;
    shop.drinksOnly();

    cout<<"Food Menu:"<<endl;
    shop.foodOnly();

    return 0;
}
