#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <vector>
using namespace std;

class BorrowerRecord;

class Book
{
    private:
        string number;
        string author;
        string title;
        BorrowerRecord *borrower; 
        // an object of a class cannot be set to NULL
        // however, you can set a pointer (which contains a memory address of an object) to NULL.
    
    public:
        // constructor
        Book(string number, string title, string author);
        Book(string title);
        Book();

        // setters and getters
        void setNumber(string &number);
        string getNumber();
        void setTitle(string &title);
        string getTitle();
        void setAuthor(string &author);
        string getAuthor();
        void setBorrower(BorrowerRecord *borrower = NULL);
        BorrowerRecord* getBorrower();

        void attackBorrower(BorrowerRecord *br);
        void detachBorrower();

        void display();
        ~Book();
};

class Library
{
    private:
        string name;
        vector<Book *> stock;
        vector<BorrowerRecord *> borrowers;
    
    public:
        // constructor
        Library(string name);
        Library();

        // 1. Register one borrower
        void registerOneBorrower(string nameBorrower);

        // 2. Add one book -> stock
        void addOneBook(Book *book);

        // 3. Display books available for loan
        void displayBooksAvailableForLoan();

        // 4. Display books out on loan
        void displayBooksOutOnLoan();

        // 5. Lend one book
        void lendOneBook(string number, string name);

        // 6. Return one book
        void returnOneBook(string number);

        // getters and setters
        void setName(string &name);
        string getName();

        void display();
        ~Library();
};

class BorrowerRecord
{
    private:
        string name;
        vector<Book *> books;

    public:
        // constructor
        BorrowerRecord(string name);

        // setters and getters
        void setName(string &name);
        string getName();
        
        void attackBook(Book *bk);
        void detachBook(Book *bk);

        void display();
        ~BorrowerRecord();
};

#endif