#include<iostream>
#include<string>
using namespace std;

class Vehicle{
protected:
	int price;
public:
	Vehicle(int p):price(p){}
	int getPrice(){return price;}
};

class Car:public Vehicle{
protected:
	int capacity;
	int numDoors;
	string fuelType;
public:
	Car(int p,int c,int d,string f):Vehicle(p),capacity(c),numDoors(d),fuelType(f){}
	int getCapacity(){return capacity;}
	int getNumDoors(){return numDoors;}
	string getFuelType(){return fuelType;}
};

class MotorCycle:public Vehicle{
protected:
	int numCylinders;
	int numGears;
	int numWheels;
public:
	MotorCycle(int p,int c,int g,int w):Vehicle(p),numCylinders(c),numGears(g),numWheels(w){}
	int getNumCylinders(){return numCylinders;}
	int getNumGears(){return numGears;}
	int getNumWheels(){return numWheels;}
};

class Audi:public Car{
private:
	string model;
public:
	Audi(int p,int c,int d,string f,string m):Car(p,c,d,f),model(m){}
	string getModel(){return model;}
	void display(){
		cout<<"Price: "<<getPrice()<<endl;
		cout<<"Seating Capacity: "<<getCapacity()<<endl;
		cout<<"Number of Doors: "<<getNumDoors()<<endl;
		cout<<"Fuel Type: "<<getFuelType()<<endl;
		cout<<"Model: "<<getModel()<<endl;
	}
};

class Yamaha:public MotorCycle{
private:
	string makeType;
public:
	Yamaha(int p,int c,int g,int w,string t):MotorCycle(p,c,g,w),makeType(t){}
	string getMakeType(){return makeType;}
	void display(){
		cout<<"Price: "<<getPrice()<<endl;
		cout<<"Number of Cylinders: "<<getNumCylinders()<<endl;
		cout<<"Number of Gears: "<<getNumGears()<<endl;
		cout<<"Number of Wheels: "<<getNumWheels()<<endl;
		cout<<"Make Type: "<<getMakeType()<<endl;
	}
};

int main(){
	Audi a(5000,5,4,"Petrol","Electra");
	Yamaha y(2000,6,4,2,"Seventy");
	a.display();
	cout<<endl;
	y.display();
	return 0;
}
