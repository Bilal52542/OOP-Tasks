#include <iostream>
#include <string>
using namespace std;

int main(int argc,char* argv[]){
;   int array[argc - 1];
    int *point = array;
    for(int i=1;i<argc;i++){
        *(point+i-1)=stoi(argv[i]);
    }
    int sum=0;
    for(int i=0;i<argc-1;i++){
        sum+=*(point+i);
    }
    cout << "Sum= " << sum;
    return 0;
}