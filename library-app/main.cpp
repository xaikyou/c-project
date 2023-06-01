#include <iostream>
#include <vector>
#include <string>
#include "library.h"

using namespace std;

/* ----- Book ----- */

Book::Book(string number, string title, string author)
{
    setNumber(number);
    setTitle(title);
    setAuthor(author);
    setBorrower(NULL);
}

Book::Book(string title) 
{
    Book("NA", title, "NA");
}

Book::Book() 
{
    Book("NA", "NA", "NA");
}

void Book::setNumber(string &number)
{
    this->number = number;
}

string Book::getNumber()
{
    return this->number;
}

void Book::setTitle(string &title)
{
    this->title = title;
}

string Book::getTitle()
{
    return this->title;
}

void Book::setAuthor(string &author)
{
    this->author = author;
}

string Book::getAuthor()
{
    return this->author;
}

void Book::setBorrower(BorrowerRecord *borrower)
{
    this->borrower = borrower;
}

BorrowerRecord* Book::getBorrower()
{
    return this->borrower;
}

void Book::attackBorrower(BorrowerRecord *br)
{
    this->setBorrower(br);
}

void Book::detachBorrower() 
{
    this->setBorrower(NULL);
}

void Book::display()
{
    cout << "\t- The catalogue number: " << this->getNumber() << endl;
    cout << "\t- The title: " << this->getTitle() << endl;
    cout << "\t- The author: " << this->getAuthor() << endl << endl;
}

/* ----- Library ------ */

Library::Library(string name)
{
    setName(name);
}

Library::Library()
{
    Library("NA");
}

string Library::getName()
{
    return this->name;
}

void Library::setName(string &name)
{
    this->name = name;
}

void Library::display()
{
    cout << "----- Welcome to " << this->getName() << " -----\n";

    cout << "Stock: \n";
    for (int i = 0; i < stock.size(); i++)
    {
        stock[i]->display();
    }

    cout << "Borrowers: \n";
    for (int i = 0; i < borrowers.size(); i++)
    {
        borrowers[i]->display();
    }
    cout << endl;
}

void Library::registerOneBorrower(string nameBorrower) 
{
    BorrowerRecord* borrower = new BorrowerRecord(nameBorrower); 
    borrowers.push_back(borrower);
}

void Library::addOneBook(Book *book)
{
    stock.push_back(book);
}

void Library::displayBooksAvailableForLoan()
{
    cout << "Books available for loan:\n";
    for (int i = 0; i < this->stock.size(); i++)
    {
        if (this->stock[i]->getBorrower() == NULL)
        {
            this->stock[i]->display();
        }       
    }   
}

void Library::displayBooksOutOnLoan()
{
    cout << "Books out on loan:\n";
    for (int i = 0; i < this->stock.size(); i++)
    {
        if (this->stock[i]->getBorrower() != NULL) 
        {
            this->stock[i]->display();
        }       
    }   
}

void Library::lendOneBook(string number, string name)
{
    // find the book (available)
    Book* bk = NULL;
    for (int i = 0; i < this->stock.size(); i++)
    {
        if (number == stock[i]->getNumber())
        {
            bk = this->stock[i];
            break;
        }       
    }

    if (bk == NULL)
    {
        cout << "This book is not exist\n\n";
        return;  // use return in void function mean it exits the function immediately
    } else if (bk->getBorrower() != NULL)
    {
        cout << "This book is on loan\n\n";
        return;
    }

    // find the borrower
    BorrowerRecord *br = NULL;
    for (int i = 0; i < this->borrowers.size(); i++)
    {
        if (name == this->borrowers[i]->getName())
        {
            br = this->borrowers[i];
            break;
        }
    }
    
    if (br == NULL)
    {
        cout << name << " haven't registered yet\n\n";
        return;
    }
    
    // attach the book and the borrower
    cout << "Borrowed book "<< bk->getNumber() << " successfully by "<< br->getName() << "\n\n";
    bk->attackBorrower(br);
    br->attackBook(bk);
}

void Library::returnOneBook(string number)
{
    Book *bk = NULL;
    BorrowerRecord *br = NULL;
    
    for (int i = 0; i < this->stock.size(); i++)
    {
        if (this->stock[i]->getBorrower() != NULL && this->stock[i]->getNumber() == number)
        {
            bk = this->stock[i];
            break; 
        }
    }

    if (bk == NULL)
        return;
    
    
    for (int i = 0; i < borrowers.size(); i++)
    {
        if (borrowers[i] == bk->getBorrower())
        {
            br = borrowers[i];
            break;
        }
    }

    if (br != NULL && bk != NULL)
    {
        br->detachBook(bk);
    } 
}

/* ----- BorrowerRecord ----- */

BorrowerRecord::BorrowerRecord(string name)
{
    setName(name);
}

void BorrowerRecord::setName(string &name)
{
    this->name = name;
}

string BorrowerRecord::getName()
{
    return this->name;
}

void BorrowerRecord::attackBook(Book *bk)
{
    this->books.push_back(bk);
    /*cout << books.size() << " " << this << " " << bk << endl;*/ // <-- just to understand
}

void BorrowerRecord::detachBook(Book *bk) 
{
    for (int i = 0; i < this->books.size(); i++)
    {
        if (bk->getNumber() == this->books[i]->getNumber())
        {
            this->books[i]->detachBorrower();
            this->books.erase(books.begin() + i);
            cout << "Returned book " << bk->getNumber() << " succesfully by " << this->getName() << "\n\n";
            break;
        }       
    }
}

void BorrowerRecord::display()
{
    cout << "\t- Name: " << this->getName() << endl;
}

Book::~Book()
{
    delete(this->borrower);
}

Library::~Library()
{
    this->stock.clear();
    this->borrowers.clear();
}

BorrowerRecord::~BorrowerRecord()
{
    this->books.clear();
}

int main(void)
{
    system("cls");

    Book book1("01", "Caleb Curry", "Prime C++");
    Book book2("02", "Randy Pausch", "The last lecture");
    Book book3("03", "Paul Kalanithi", "When breath becomes air");

    Library lib("HCMUS LIBRARY");

    lib.addOneBook(&book1);
    lib.addOneBook(&book2);
    lib.addOneBook(&book3);
    
    lib.registerOneBorrower("Nam");
    lib.registerOneBorrower("Thanh");
    lib.display();

    lib.displayBooksAvailableForLoan();

    lib.lendOneBook("03", "Nam");
    lib.lendOneBook("02", "Nam");
    lib.lendOneBook("01", "Thah");
    lib.displayBooksAvailableForLoan();
    lib.displayBooksOutOnLoan();

    lib.returnOneBook("01");
    lib.returnOneBook("03");
    lib.displayBooksAvailableForLoan();
    lib.displayBooksOutOnLoan();

    lib.lendOneBook("03", "Nam");
    lib.displayBooksAvailableForLoan();

    lib.returnOneBook("03");
    lib.displayBooksAvailableForLoan();

    return 0;
}