#include<iostream>
#include<string>
using namespace std;
class Glass{
public:
    int LiquidLevel=200;
    void Drink(int milliliters){
        if(milliliters>0 && milliliters<=LiquidLevel){
            LiquidLevel-=milliliters;
            if(milliliters<100){
                Refill();
            }
        }
    }
    void Refill(){
        LiquidLevel=200;
        cout<<"Glass Refilled"<<endl;
    }
};
int main(int argc,char* argv[]){
    class Glass glass;
    string choice;
    int amount;
    while(1){
        cout<<"Enter 'drink' followed by milliliters, or 'stop' to stop: ";
        cin>>choice;
        if(choice=="stop"){
            break;
        }else if(choice=="drink"){
            cin>>amount;
            glass.Drink(amount);
            cout<<"Current liquid level: "<<glass.LiquidLevel<<" ml"<<endl;
        }else{
            cout<<"Wrong command!"<<endl;
        }
    }
return 0;
}