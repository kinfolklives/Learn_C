#include<iostream>
#include<cstring>

using namespace std;

void printBook(struct Book *book);

struct Book{
    string subject;
    char author[50];
}; // ; 붙일것!

int main(){
    struct Book Book1; // Book1 of type Book 선언
    struct Book Book2; 
    Book1.subject = "C++ Programming";
    strcpy(Book1.author, "Chand Miyan");
    cout << "Book 1 subject : " << Book1.subject << endl; // Book 1 subject : C++ Programming

    printBook(&Book1);                                      // >> void printBook() >>>>  printBook subject: C++ Programming 
    cout << "Book 1 subject: " << Book1.subject << endl; // Book 1 subject: Change subject in function

    return 0;
}

void printBook(struct Book *book){
    cout << "printBook subject: " << book->subject << endl;  // printBook subject: C++ Programming 
    book->subject = "Change subject in function";
}