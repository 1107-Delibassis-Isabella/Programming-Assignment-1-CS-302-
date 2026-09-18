#ifndef BOOK_H
#define BOOK_H
#include "Resource.h"

class Book : public Resource{
    string author;
    int pages; 

    public:
        Book(int i, const string& n, string a, int p);
        void display() const override;
        double usageCost() const override;
};
#endif
