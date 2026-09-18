#include "Book.h"

    Book::Book(int i, const string& n, string a, int p):Resource(i, n) {
        author = a;
        pages = p;
    }

    void Book::display() const {
        cout << "Book" << endl;
        cout << endl << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Author: " << author << endl;
        cout << "Pages: " << pages << endl;
        cout << "Cost: $" << usageCost() << endl;
    }
    double Book::usageCost() const {
        double cost;
        cost = pages * 0.01;
        return cost;
    }
