#include "book.h"

class Book {
    Book::Book(int i, const std::string& n, std::string a, int p):Resource(i, n) {
        author = a;
        pages = p;
    }

    void Book::display() const {

    }
    double Book::usageCost() const {
        double cost;
        cost = pages * 0.01;
        return cost;
    }
}
