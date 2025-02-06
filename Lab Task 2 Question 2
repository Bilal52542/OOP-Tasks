#include<iostream>
#include<string>
using namespace std;
void* Add(void* arr,int argc){
    int* intArr=(int*)arr;
    for(int i=0;i<argc-1;i++){
        intArr[i]++;
    }
    return intArr;
}
int main(int argc, char* argv[]) {
    int arr[argc-1];
    for(int i=1;i<argc;i++){
        arr[i-1]= stoi(argv[i]);
    }
    void* ini_out=Add(arr,argc);
    int* fn_out=(int*)ini_out;
    for(int i=0;i<argc-1;i++){
        cout<<fn_out[i]<<" ";
    }
    return 0;
}