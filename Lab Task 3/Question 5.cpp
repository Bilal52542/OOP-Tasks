#include<iostream>
using namespace std;
class Book{
    string name;
    string ISBN_number;
    string author_name,publisher;
    public:
        Book(string bookName,string isbn,string author,string publisher){
            this->name=bookName;
            this->ISBN_number=isbn;
            this->author_name= author;
            this->publisher=publisher;
        }

        string getBookName(){
            return this->name;
        }
        string getISBN(){
            return this->ISBN_number;
        }
        string getAuthor(){
            return this->author_name;
        }
        string getPublisher(){
            return this->publisher;
        }

        string getBookInfo(){
            return "Book Name: "+this->name+"\nISBN: "+this->ISBN_number+
                "\nAuthor: "+this->author_name+"\nPublisher: "+this->publisher;
        }
};
int main(){
    class Book books[5]={
        Book("A Monster Calls","978-0-316-76948-0","Patrick Ness","Walker Books"),
        Book("1984","978-0-452-28423-4","George Orwell","Signet Classic"),
        Book("To Kill a Mockingbird","978-0-06-112008-4","Harper Lee","Harper Perennial"),
        Book("The Great Gatsby","978-0-7432-7356-5","F. Scott Fitzgerald","Scribner"),
        Book("Moby Dick","978-0-14-243724-7","Herman Melville","Penguin Classics")
    };
    for(int i=0;i<5;i++){
        cout<<"Book "<<i+1<<" Details:\n";
        cout<<books[i].getBookInfo()<<"\n\n";
    }
}