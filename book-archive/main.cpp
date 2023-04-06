#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void selectOption(vector<string> &books);

void readFile(vector<string> &books)
{
    ifstream file("book.txt");
    string line;

    if (file.fail())
    {
        cout << "Error: File failed to open" << endl;
    }

    while (getline(file,line, '\n')) // What have i done here???
    {        
        books.push_back(line);
    }

    file.close();
}

void addBook(vector<string> &books)
{
    cout << endl << "--> ADD BOOK\n";
    string title, author;
    cout << "Title: ";
    cin.ignore();
    getline(cin, title);
    cout << "Author: ";
    getline(cin, author);

    if (title == "") 
        title  = "NA";
    if (author == "")
        author = "NA";

    string book = to_string(books.size() + 1) + " - " + title + " - " + author;
    books.push_back(book);

    cout << "Succesfully added" << endl << endl;
    selectOption(books);
}

void display(vector<string> &books)
{
    cout << endl << "Books: \n";
    for (string book : books)
    {
        cout << book << endl;
    }
    cout << endl;
    selectOption(books);
}

void deleteBook(vector<string> &books)
{
    cout << endl << "--> DELETE BOOK\n";
    cout << "Type the number of the book you want to delete.\n";
    cout << "Book ID: ";
    string bookID;
    cin >> bookID;

    int index = 0;
    while (index < books.size())
    {
        if (bookID == books[index].substr(0, bookID.size()))
        {
            //books.erase(books.begin() + index);
            books[index] = "NA";
            cout << "Succesfully deleted\n";
            break;
        }
        index++;
    }
    if (index == books.size())
        cout << "Hmm.. I can't find the book you are looking for.\n";

    cout << endl;
    selectOption(books);
}

void updateArchive(vector<string> &books)
{
    cout << endl << "--> UPDATE ARCHIVE\n";

    ofstream file("book.txt");
    for (string book : books)
    {
        file << book << endl;
    }
    file.close();

    cout << "Successfully updated\n";
    cout << endl;
    selectOption(books);
}

void selectOption(vector<string> &books)
{
    cout << "1: Add one book\n";
    cout << "2: Delete one book\n";
    cout << "3: Display all books\n";
    cout << "4: Update archive\n";
    cout << "0: Quit\n";
    cout << "Select option: ";
    string option;
    cin >> option;

    if (option.size() != 1 || 
        (option[0] != '1' && option[0] != '2' && option[0] != '3' && option[0] != '4' && option[0] != '0'))
    {
        cout << "Hmm.. I don't understand. Please select agian.\n";
        cout << "Select option: ";
        cin >> option;
    }

    switch (option[0])
    {
    case '1':
        addBook(books);
        break;
    
    case '2':
        deleteBook(books);
        break;

    case '3':
        display(books);
        break;
    
    case '4':
        updateArchive(books);
        break;

    default:
        break;
    }
}

int main()
{
    cout << "[[[ FAVORITE BOOK ARCHIVE ]]]" << endl;
    vector<string> books;
    readFile(books);
    selectOption(books);

    return 0;
}