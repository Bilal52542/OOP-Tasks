#include <iostream>
#include<iomanip>
#include<string>
using namespace std;
int main(int argc,char* argv[]){
    cout<<fixed<<setprecision(2);
    string f_name=argv[1],l_name=argv[2];
    float arr[5];
    for(int i=3;i<=7;i++){
        arr[i]=stof(argv[i]);
    }
    cout<<"Student Name: "<<f_name<<" "<<l_name<<endl;
    cout<<"Test Scores: ";
    for(int i=3;i<=7;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    float sum=0;
    for(int i=3;i<=7;i++){
        sum+=arr[i];
    }
    float avg;
    cout<<"Average Test Score: "<<(sum/5);
return 0;
}