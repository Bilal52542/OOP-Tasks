#include<iostream>
#include<vector>
using namespace std;

class CoffeeShop{
public:
        struct MenuItem{ 
            string name,type; 
            double price; 
        };
private:
    string name;
    vector<MenuItem> menu;
    vector<string> orders;
public:
    CoffeeShop(string n, vector<MenuItem> m) : name(n), menu(m) {}

    string addOrder(string item){
        for(auto &m : menu){
            if(m.name==item){
                orders.push_back(item);
                return "Added"; 
            }
        }
        return "This item is currently unavailable";
    }

    string fulfillOrder(){
        if(orders.empty()) return "All orders have been fulfilled";
        string item=orders[0];
        orders.erase(orders.begin());
        return "The " + item + " is ready";
    }

    vector<string> listOrders(){
        return orders;
    }
    double dueAmount(){
        double sum=0;
        for(auto &o : orders)
            for(auto &m : menu)
                if(m.name == o) sum+=m.price;
        return sum;
    }

    string cheapestItem(){
        double minP = 1000000000;
        string minN;
        for(auto &m : menu)
            if (m.price < minP){
                minP=m.price;
                minN=m.name;
            }
        return minN;
    }

    vector<string> drinksOnly(){
        vector<string> d;
        for (auto &m : menu){
            if (m.type=="drink") d.push_back(m.name);
        }
        return d;
    }

    vector<string> foodOnly(){
        vector<string> f;
        for (auto &m : menu){
            if (m.type=="food") f.push_back(m.name);
        }
        return f;
    }
};
int main(){
    vector<CoffeeShop::MenuItem> menu={
        {"Coffee", "drink", 2.5},
        {"Tea", "drink", 1.8},
        {"Sandwich", "food", 5.0},
        {"Cake", "food", 4.5}
    };

    CoffeeShop shop("Java Beans", menu);

    cout<<shop.addOrder("Coffee")<<endl;
    cout<<shop.addOrder("Cake")<<endl;
    cout<<shop.addOrder("Burger")<<endl;

    cout<<"Due amount: $"<<shop.dueAmount()<<endl;

    cout<<shop.fulfillOrder()<<endl;
    cout<<shop.fulfillOrder()<<endl;
    cout<<shop.fulfillOrder()<<endl;

    cout<<"Cheapest item: "<<shop.cheapestItem()<<endl;

    vector<string> drinks=shop.drinksOnly();
    cout<<"Drinks: ";
    for(auto &d : drinks){
        cout<<d<<" ";
    }
    cout<<endl;

    vector<string> food=shop.foodOnly();
    cout<<"Food: ";
    for(auto &f : food){
        cout<<f<<" ";
    }
    cout<<endl;

return 0;
}


