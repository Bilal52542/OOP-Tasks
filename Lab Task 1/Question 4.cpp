#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(int argc,char* argv[]){
    cout<<fixed<<setprecision(2);
    float k_weight,p_weight;
    k_weight=stof(argv[1]);
    p_weight=k_weight*2.2;
    cout<<p_weight;
return 0;
}