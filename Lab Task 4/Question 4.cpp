#include<iostream>
using namespace std;
class Book {
    string author, title, publisher;
    double price;
    int stock;
public:
    Book(string a, string t, string p, double pr, int s) : author(a), title(t), publisher(p), price(pr), stock(s) {}
    bool search(string t, string a){ 
        return title==t && author==a;
    }
    void sell(int qty){
        if(qty<=stock){
            cout<<"Total cost: "<<qty * price<<endl;
            stock-=qty;
        }else{
            cout<<"Required copies not in stock\n";
        }
    }
};
int main(){
    Book book("J.K. Rowling", "Harry Potter", "Bloomsbury", 39.99, 10);

    string searchTitle, searchAuthor;
    cout<<"Enter book title: ";
    getline(cin, searchTitle);
    cout<<"Enter author name: ";
    getline(cin, searchAuthor);

    if(book.search(searchTitle, searchAuthor)){
        cout<<"Book found!\n";
        int quantity;
        cout<<"Enter quantity to purchase: ";
        cin>>quantity;
        book.sell(quantity);
    }else{
        cout<<  "Book not found in inventory.\n";
    }
return 0;
}
