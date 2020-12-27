#include <iostream>

using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;
        Book(string name){
            cout<<name<<" is name of book \n";
        }
};
int main(){

    Book book1("life of girl");
    book1.title="brida";
    book1.author="paulo";
    book1.pages=100;

    Book book2("animal");
    book2.title="tiger";
    book2.author="ram";
    book2.pages=200;

    return 0;
}