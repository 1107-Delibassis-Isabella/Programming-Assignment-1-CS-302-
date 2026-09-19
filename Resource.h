#ifndef RESOURCE_H
#define RESOURCE_H
#include <iostream>
using namespace std;

class Resource {
    protected: 
        int id;
        string name;

    public:
        Resource(int i, const string& n);
        virtual ~Resource();

        virtual void display() const=0;
        virtual double usageCost() const=0;
};
#endif
