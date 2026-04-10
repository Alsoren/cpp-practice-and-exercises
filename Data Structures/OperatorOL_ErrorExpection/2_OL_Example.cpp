#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bName;
    int numPage;
    int pubYear;

public:
    Book(string bName, int numPage, int pubYear){
        this->bName = bName;
        this->numPage = numPage;
        this->pubYear = pubYear;
    }

    bool operator== (const Book& b2){
        if (bName == b2.bName){
            return true;
        }
        else return false;
    }

    bool operator!= (const Book& b2){
        if (bName != b2.bName){
            return true;
        }
        else return false;
    }
};




int main() {
    Book b1 = {"Kara Kedi", 234, 2012};
    Book b2 = {"Kara Kedi", 254, 2018};

    if (b1 == b2)
    {
        cout << "Kitaplarin isimleri ayni."<< endl;
    }
    
    else cout << "Kitaplarin isimleri farkli"<< endl;
    
}