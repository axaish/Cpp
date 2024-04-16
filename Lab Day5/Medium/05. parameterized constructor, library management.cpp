#include <iostream>
#include <stack>
#include <string>

class Book {
private:
    int bookID;
    std::string bookName;

public:
    Book(int id, const std::string& name) : bookID(id), bookName(name) {}

    int getBookID() const {
        return bookID;
    }

    const std::string& getBookName() const {
        return bookName;
    }
};

class User {
private:
    int regNo;
    std::string userName;

public:
    User(int reg, const std::string& name) : regNo(reg), userName(name) {}

    int getRegNo() const {
        return regNo;
    }

    const std::string& getUserName() const {
        return userName;
    }
};

class Library {
private:
    std::stack<Book> books;
    std::stack<User> users;

public:
    void addBook(const Book& book) {
        books.push(book);
    }
    void addUser(const User& user) {
        users.push(user);
    }
    bool isBookAvailable() const {
        return !books.empty();
    }
    Book distributeBook() {
        Book distributedBook = books.top();
        books.pop();
        return distributedBook;
    }
};

int main() {
    Book book1(101, "Introduction to Algorithms");
    Book book2(102, "Clean Code");
    Book book3(103, "The C++ Programming Language");
    User user1(1001, "John Doe");
    User user2(1002, "Alice Smith");
    Library library;
    library.addBook(book1);
    library.addBook(book2);
    library.addBook(book3);
    library.addUser(user1);
    library.addUser(user2);
    if (library.isBookAvailable()) {
        Book distributedBook = library.distributeBook();
        std::cout << "Book distributed: " << distributedBook.getBookName() << std::endl;
    } else {
        std::cout << "No books available in the library." << std::endl;
    }

    return 0;
}
