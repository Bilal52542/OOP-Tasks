#include<iostream>
using namespace std;

class Engine{
    bool isRunning;
public:
    Engine(){
		isRunning=false;	
	}
    void start(){
	isRunning=true;
	cout<<"Engine started\n";
	}
    void stop(){
	isRunning=false;
	cout<<"Engine stopped\n";
	}
};
class Car{
    Engine engine;
public:
    void startCar(){
	engine.start();
	}
    void stopCar(){
	engine.stop();
	}
};

int main(){
    Car car;
    car.startCar();
    car.stopCar();
    return 0;
}

