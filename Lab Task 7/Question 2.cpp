#include<iostream>
#include<vector>
using namespace std;

class Polynomial{
    vector<int> coefficients;
public:
    Polynomial(){}
    Polynomial(vector<int> i):coefficients(i){}

    Polynomial operator+(const Polynomial& other){
        cout<<"+ ing"<<endl;
        int maxSize=max(coefficients.size(),other.coefficients.size());
        vector<int> out(maxSize,0);
        for(int i=0;i<coefficients.size();i++){
            out[i]+=coefficients[i];
        }
        for(int i=0;i<other.coefficients.size();i++){
            out[i]+=other.coefficients[i];
        }
        return Polynomial(out);
    }
    
    friend ostream& operator<<(ostream& out, const Polynomial& p);
};

ostream& operator<<(ostream& out, const Polynomial& p){
    out << "(" << p.x << ", " << p.y << ")";
    return out;
}

int main(){

return 0;
}