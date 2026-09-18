#ifndef BOOK_H
#define BOOK_H
#include "resource.h"

class Book:public Resource{
    std::string author;
    int pages; 

    public:
        Book(int i, const std::string& n, std::string a, int p);
        void display() const override;
        double usageCost() const override;
};
