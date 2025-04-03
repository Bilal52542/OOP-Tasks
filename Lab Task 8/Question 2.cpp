#include<iostream>
#include<cmath>
using namespace std;

class Shape{
protected:
    string position,color;
public:
    Shape(string pos,string col):position(pos),color(col){}
    virtual void draw(){cout<<"Drawing Shape at "<<position<<" with color "<<color<<endl;}
    virtual double calculateArea(){return 0;}
    virtual double calculatePerimeter(){return 0;}
    virtual ~Shape(){}
};

class Circle:public Shape{
    double radius;
public:
    Circle(string pos,string col,double rad):Shape(pos,col),radius(rad){}
    void draw(){cout<<"Drawing Circle at "<<position<<" with radius "<<radius<<" and color "<<color<<endl;}
    double calculateArea(){return M_PI*radius*radius;}
    double calculatePerimeter(){return 2*M_PI*radius;}
};

class Rectangle:public Shape{
    double width,height;
public:
    Rectangle(string pos,string col,double w,double h):Shape(pos,col),width(w),height(h){}
    void draw(){cout<<"Drawing Rectangle at "<<position<<" with width "<<width<<" and height "<<height<<" and color "<<color<<endl;}
    double calculateArea(){return width*height;}
    double calculatePerimeter(){return 2*(width+height);}
};

class Triangle:public Shape{
    double a,b,c;
public:
    Triangle(string pos,string col,double s1,double s2,double s3):Shape(pos,col),a(s1),b(s2),c(s3){}
    void draw(){cout<<"Drawing Triangle at "<<position<<" with sides "<<a<<", "<<b<<", "<<c<<" and color "<<color<<endl;}
    double calculateArea(){double s=(a+b+c)/2;return sqrt(s*(s-a)*(s-b)*(s-c));}
    double calculatePerimeter(){return a+b+c;}
};

class Polygon:public Shape{
    int sides;
    double *lengths;
public:
    Polygon(string pos,string col,int n,double* lens):Shape(pos,col),sides(n){lengths=new double[n];for(int i=0;i<n;i++)lengths[i]=lens[i];}
    void draw(){cout<<"Drawing Polygon at "<<position<<" with "<<sides<<" sides and color "<<color<<endl;}
    double calculatePerimeter(){double p=0;for(int i=0;i<sides;i++)p+=lengths[i];return p;}
    ~Polygon(){delete[] lengths;}
};

int main(){
    Circle c("center","red",5);
    Rectangle r("top-left","blue",10,5);
    Triangle t("vertex","green",3,4,5);
    double lengths[]={3,4,5,6};
    Polygon p("corner","yellow",4,lengths);

    c.draw();cout<<"Area:"<<c.calculateArea()<<" Perimeter:"<<c.calculatePerimeter()<<endl;
    r.draw();cout<<"Area:"<<r.calculateArea()<<" Perimeter:"<<r.calculatePerimeter()<<endl;
    t.draw();cout<<"Area:"<<t.calculateArea()<<" Perimeter:"<<t.calculatePerimeter()<<endl;
    p.draw();cout<<"Perimeter:"<<p.calculatePerimeter()<<endl;
return 0;
}
