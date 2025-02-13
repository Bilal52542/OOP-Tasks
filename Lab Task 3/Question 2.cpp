#include<iostream>
#include<string>
using namespace std;
class Date{
public:
    int month,day,year;
    Date(int date,int month, int year) : day(date), month(month), year(year){}
    void displayDate(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(int argc,char* argv[]){
    class Date date(13,2,2025);
    date.displayDate();
return 0;
}