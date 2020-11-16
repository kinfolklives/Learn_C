#include<iostream>
#include<cstring>  

using namespace std;

struct Book{
    char title[50], author[50];
    string subject;
    int book_id;
};

struct Books{
    struct Book BookList[5];
    string category;
    void print_booklist() {
        for (int i = 0; i<5; i++){
        cout << i << "." << BookList[i].title << endl;
    }
    };
};

enum categories {COMPUTERS, ARTS, BUSINESS};
int main() {
    struct Books BestSell; 
    BestSell.category = categories::COMPUTERS;
    // BestSell.BookList[0];
    strcpy(BestSell.BookList[1].title, "Telecom Billing");
    strcpy(BestSell.BookList[1].author, "Yakit Shingha");
    BestSell.print_booklist();

    struct Book Book1;
    strcpy(Book1.title, "Learn C++ Programming");
    Book1.subject = "C++ Programming";
    strcpy(Book1.author, "Chand Miyan");
    Book1.book_id = 6495407;
    cout << "Book 1 title: " << Book1.title << endl;
    cout << "Book 1 author: " << Book1.author << endl;
    cout << "Book 1 subject: " << Book1.subject << endl;
    cout << "Book 1 id: " << Book1.book_id << endl;

    struct Book Book2;
    strcpy(Book2.title, "Learn C++ programming again"); // strcpy (dest, src) > copying src to dest
    Book2.subject = "C++ programming again";
    strcpy(Book2.author, "Eugene Choi");
    Book2.book_id = 123456;

    cout << "Book 2 title: " << Book2.title << endl;
    cout << "Book 2 subject: " << Book2.subject << endl;
    cout << "Book 2 author: " << Book2.author << endl;
    cout << "Book 2 id : " << Book2.book_id << endl;

    return 0;
}