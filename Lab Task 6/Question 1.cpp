#include<iostream>
#include<string>
using namespace std;

class Books{
protected:
	string genre; 
public:
	Books(string g):genre(g){}
	string getGenre(){return genre;}
};

class Fantasy:public Books{
private:
	string title;
	string author;
public:
	Fantasy(string t,string a):Books("Fantasy"),title(t),author(a){}
	string getTitle(){return title;}
	string getAuthor(){return author;}
	void display(){
		cout<<"Genre: "<<getGenre()<<endl;
		cout<<"Title: "<<getTitle()<<endl;
		cout<<"Author: "<<getAuthor()<<endl;
	}
};

class Mystery:public Books{
private:
	string title;
	string author;
public:
	Mystery(string t,string a):Books("Mystery"),title(t),author(a){}
	string getTitle(){return title;}
	string getAuthor(){return author;}
	void display(){
		cout<<"Genre: "<<getGenre()<<endl;
		cout<<"Title: "<<getTitle()<<endl;
		cout<<"Author: "<<getAuthor()<<endl;
	}
};

int main(){
	Fantasy f("Henno","Ahmed");
	Mystery m("Hi","Bilal");
	f.display();
	cout<<endl;
	m.display();
	return 0;
}