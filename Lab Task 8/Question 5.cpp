#include <iostream>
#include <string>
using namespace std;

class Media {
protected:
    string title, publicationDate, uniqueID, publisher;
public:
    Media(string t, string pDate, string uID, string pub) : title(t), publicationDate(pDate), uniqueID(uID), publisher(pub) {}
    virtual void displayInfo() {
        cout << "Title: " << title << "\nPublication Date: " << publicationDate << "\nUnique ID: " << uniqueID << "\nPublisher: " << publisher << endl;
    }
    virtual void checkout() {
        cout << title << " has been checked out.\n";
    }
    virtual void returnItem() {
        cout << title << " has been returned.\n";
    }
    virtual ~Media() {}
};

class Book : public Media {
private:
    string author, ISBN;
    int numberOfPages;
public:
    Book(string t, string pDate, string uID, string pub, string auth, string isbn, int pages)
        : Media(t, pDate, uID, pub), author(auth), ISBN(isbn), numberOfPages(pages) {}
    
    void displayInfo() override {
        Media::displayInfo();
        cout << "Author: " << author << "\nISBN: " << ISBN << "\nNumber of Pages: " << numberOfPages << endl;
    }
};

class DVD : public Media {
private:
    string director;
    int duration;  // in minutes
    string rating;
public:
    DVD(string t, string pDate, string uID, string pub, string dir, int dur, string rt)
        : Media(t, pDate, uID, pub), director(dir), duration(dur), rating(rt) {}
    
    void displayInfo() override {
        Media::displayInfo();
        cout << "Director: " << director << "\nDuration: " << duration << " minutes\nRating: " << rating << endl;
    }
};

class CD : public Media {
private:
    string artist;
    int numberOfTracks;
    string genre;
public:
    CD(string t, string pDate, string uID, string pub, string art, int tracks, string gen)
        : Media(t, pDate, uID, pub), artist(art), numberOfTracks(tracks), genre(gen) {}
    
    void displayInfo() override {
        Media::displayInfo();
        cout << "Artist: " << artist << "\nNumber of Tracks: " << numberOfTracks << "\nGenre: " << genre << endl;
    }
};

class Magazine : public Media {
private:
    string issueNumber;
    string editor;
public:
    Magazine(string t, string pDate, string uID, string pub, string issue, string ed)
        : Media(t, pDate, uID, pub), issueNumber(issue), editor(ed) {}
    
    void displayInfo() override {
        Media::displayInfo();
        cout << "Issue Number: " << issueNumber << "\nEditor: " << editor << endl;
    }
};

int main() {
    
    return 0;
}
