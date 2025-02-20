#include<iostream>
using namespace std;
class Circle{
    double r;
public:
    Circle(double radius) : r(radius){}
    double getArea(){ 
        return 3.14 * r * r;
    }
    double getPerimeter(){
        return 2 * 3.14 * r;
    }
};
int main(){
    cout<<"Radius : ";
    float radius;
    cin>>radius;
    class Circle circle(radius);
    cout<<"Area is "<<circle.getArea()<<endl;
    cout<<"Perimeter is "<<circle.getPerimeter()<<endl;
return 0;
}