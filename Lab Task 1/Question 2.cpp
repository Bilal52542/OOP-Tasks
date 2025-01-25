#include <iostream>
using namespace std;
int main(int argc,char *argv[]){
    float array[20];
    int sum=0;
    for(int i=1;i<=20;i++){
        array[i-1]=stof(argv[i]);
    }
    float *point=array;
    for(int i=0;i<20;i++){
        sum+=*(point+i);
    }
    cout<<sum;
return 0;
}