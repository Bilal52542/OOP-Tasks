#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char* argv[]){
    int n=5;
    int count=0;
    int* arr=new int[n];
    for(int i=1;i<argc;i++){
        if(count==n){
            int newSize=n*2;
            int* newArr=new int[newSize];
            memcpy(newArr,arr,n*sizeof(int));
            delete[] arr;
            arr=newArr;
            n=newSize;
        }
        arr[count++]=stoi(argv[i]);
    }
    cout<<"Stored Array Elements:\n";
    for(int i=0;i<count;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;
}