#include <iostream>
#include <string>

class Book {
private:
    std::string title;
    std::string author;
    int publicationYear;

public:
    Book(const std::string& bookTitle, const std::string& bookAuthor, int year)
        : title(bookTitle), author(bookAuthor), publicationYear(year) {
        std::cout << "A new book \"" << title << "\" by " << author << " published in " << publicationYear << " is created." << std::endl;
    }

    ~Book() {
        std::cout << "The book \"" << title << "\" by " << author << " published in " << publicationYear << " is destroyed." << std::endl;
    }

    void display() const {
        std::cout << "Book: \"" << title << "\" by " << author << ", Published in " << publicationYear << std::endl;
    }
};

int main() {
    Book myBook("The Great Gatsby", "F. Scott Fitzgerald", 1925);

    myBook.display();

    return 0;
}
