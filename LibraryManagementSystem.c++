#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Book {
private:
    string title;
    string author;
    string ISBN;

public:
    Book(string title, string author, string ISBN) {
        this->title = title;
        this->author = author;
        this->ISBN = ISBN;
    }

    string getTitle() const {
        return title;
    }

    string getAuthor() const {
        return author;
    }

    string getISBN() const {
        return ISBN;
    }
};

class Library {
private:
    vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
        cout << "Book added successfully." << endl;
    }

    void displayAllBooks() const {
        if (books.empty()) {
            cout << "No books in the library." << endl;
        } else {
            cout << "Books in the library:" << endl;
            for (const auto& book : books) {
                cout << "Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", ISBN: " << book.getISBN() << endl;
            }
        }
    }

    void searchByTitle(const string& title) const {
        bool found = false;
        for (const auto& book : books) {
            if (book.getTitle() == title) {
                cout << "Book found: Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", ISBN: " << book.getISBN() << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Book not found." << endl;
        }
    }

    void searchByAuthor(const string& author) const {
        bool found = false;
        for (const auto& book : books) {
            if (book.getAuthor() == author) {
                cout << "Book found: Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", ISBN: " << book.getISBN() << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Book not found." << endl;
        }
    }

    void searchByISBN(const string& ISBN) const {
        bool found = false;
        for (const auto& book : books) {
            if (book.getISBN() == ISBN) {
                cout << "Book found: Title: " << book.getTitle() << ", Author: " << book.getAuthor() << ", ISBN: " << book.getISBN() << endl;
                found = true;
            }
        }
        if (!found) {
            cout << "Book not found." << endl;
        }
    }

    void removeBook(const string& ISBN) {
        auto it = find_if(books.begin(), books.end(), [&](const Book& book) {
            return book.getISBN() == ISBN;
        });
        if (it != books.end()) {
            books.erase(it);
            cout << "Book removed successfully." << endl;
        } else {
            cout << "Book not found." << endl;
        }
    }
};

int main() {
    Library library;

    int choice;
    string title, author, ISBN;

    do {
        cout << "\nMenu:\n1. Add Book\n2. Display All Books\n3. Search by Title\n4. Search by Author\n5. Search by ISBN\n6. Remove Book\n7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter book title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter book author: ";
                getline(cin, author);
                cout << "Enter book ISBN: ";
                getline(cin, ISBN);
                library.addBook(Book(title, author, ISBN));
                break;
            case 2:
                library.displayAllBooks();
                break;
            case 3:
                cout << "Enter book title to search: ";
                cin.ignore();
                getline(cin, title);
                library.searchByTitle(title);
                break;
            case 4:
                cout << "Enter book author to search: ";
                cin.ignore();
                getline(cin, author);
                library.searchByAuthor(author);
                break;
            case 5:
                cout << "Enter book ISBN to search: ";
                cin.ignore();
                getline(cin, ISBN);
                library.searchByISBN(ISBN);
                break;
            case 6:
                cout << "Enter book ISBN to remove: ";
                cin.ignore();
                getline(cin, ISBN);
                library.removeBook(ISBN);
                break;
            case 7:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a number between 1 and 7." << endl;
        }
    } while (choice != 7);

    return 0;
}
