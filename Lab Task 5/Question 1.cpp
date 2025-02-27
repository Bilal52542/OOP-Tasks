#include<iostream>
#include<ctime>
using namespace std;
void JamCode(){
    for(long long i=0;i<5*100000000;i++);
    for(long long i=0;i<5*100000000;i++);
    for(long long i=0;i<5*100000000;i++);
    for(long long i=0;i<5*100000000;i++);
    for(long long i=0;i<5*100000000;i++);
}
class Blend{
    public:
    void blendJuice(){
        cout<<"Blending juice..."<<endl;
        JamCode();
        cout<<"Blending complete!"<<endl;
    }
};

class Grind{
    public:
    void grindJuice(){
        cout<<"Grinding juice..."<<endl;
        JamCode();
        cout<<"Grinding complete!"<<endl;
    }
};

class JuiceMaker{
    Blend blend;
    Grind grind;
    public:
    void makeJuice(){
        blend.blendJuice();
        grind.grindJuice();
        cout<<"Juice is ready!"<<endl;
    }
};

int main(){
    JuiceMaker jm;
    jm.makeJuice();
    return 0;
}
