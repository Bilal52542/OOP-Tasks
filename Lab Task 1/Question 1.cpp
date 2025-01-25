#include <iostream>
#include <string>
using namespace std;
int main(int argc,char *argv[]){
    float array[20];
    for(int i=1;i<=20;i++){
        array[i-1]=stof(argv[i]);
    }
    float *point=array,max=point[0],sec=point[0];
    for(int i=1;i<20;i++){
        if(max<point[i]){
            max=point[i];
        }
    }
    for(int j=0;j<20;j++){
        if(sec<point[j] && point[j]<max){
            sec=point[j];
        }
    }
    if(sec==max){
        cout<<"No 2nd max";
    }else cout<<sec;
return 0;
}