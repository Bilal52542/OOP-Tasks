#include<iostream>
#include<vector>
#include<string>

class Car{
    string name;
    int id;
public:
    Car(string n,int i):name(n),id(i){}
    int getID(){return id;}
    string getName(){return name;}
};
class Garage{
    vector<Car*>cars;
public:
    void parkCar(Car*car){
	cars.push_back(car);
	}
    void listCars(){
		for(int i=0;i<cars.size();i++){
			cout<<cars[i]->getName()<<" ("<<cars[i]->getID()<<")\n";
		}
	}
};

int main(){
    Car car1("Toyota",1),car2("Lexus",2);
    Garage garage;
    garage.parkCar(&car1);
    garage.parkCar(&car2);
    garage.listCars();
    return 0;
}
