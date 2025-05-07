#include<iostream>
using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

class Fraction{
    int numerator,denominator;
public:
    Fraction(int n,int d){
        int div=gcd(n, d);
        n/=div;
        d/=div;
        if(d<0){
            denominator=abs(d);
            numerator=n*(-1);
        }else{
            denominator=d;
            numerator=n;
        }
    }
    Fraction operator+(const Fraction& other){
        cout<<"+ ing"<<endl;
        return Fraction(numerator+other.numerator, denominator+other.denominator);
    }
    Fraction operator-(const Fraction& other){
        cout<<"- ing"<<endl;
        return Fraction(numerator-other.numerator,denominator-other.denominator);
    }
    Fraction operator*(const Fraction& other){
        cout<<"* ing"<<endl;
        return Fraction(numerator*other.numerator,denominator*other.denominator);
    }
    Fraction operator/(const Fraction& other){
        cout<<"/ ing"<<endl;
        return Fraction(numerator/other.numerator,denominator/other.denominator);
    }
    
    Fraction operator==(const Fraction& other){
        cout<<"== ing"<<endl;
        return Fraction(numerator==other.numerator,denominator==other.denominator);
    }
    Fraction operator!=(const Fraction& other){
        cout<<"!= ing"<<endl;
        return Fraction(numerator!=other.numerator,denominator!=other.denominator);
    }
    Fraction operator<(const Fraction& other){
        cout<<"< ing"<<endl;
        return Fraction(numerator<other.numerator,denominator<other.denominator);
    }
    Fraction operator>(const Fraction& other){
        cout<<"> ing"<<endl;
        return Fraction(numerator>other.numerator,denominator>other.denominator);
    }
    Fraction operator<=(const Fraction& other){
        cout<<"<= ing"<<endl;
        return Fraction(numerator<=other.numerator,denominator<=other.denominator);
    }
    Fraction operator>=(const Fraction& other){
        cout<<">= ing"<<endl;
        return Fraction(numerator>=other.numerator,denominator>=other.denominator);
    }
    friend ostream& operator<<(std::ostream& os,const Fraction& f);
    friend istream& operator>>(std::istream& is,const Fraction& f);
    void setNum(int n){
        numerator=n;
    }
    void setDen(int d){
        denominator=d;
    }
};

ostream& operator<<(ostream& out, const Fraction& f){
    out << "(" << f.numerator << ", " << f.denominator << ")";
    return out;
}
istream& operator>>(istream& in, Fraction& f){
    int x,y;
    cout << "Enter x and y: ";
    cin >> x>>y;
    f.setNum(x);
    f.setDen(y);
    return in;
}

int main(){
Fraction f1(2, 4), f2(3, 6);
std::cout<<(f1 + f2)<<std::endl;
return 0;
}