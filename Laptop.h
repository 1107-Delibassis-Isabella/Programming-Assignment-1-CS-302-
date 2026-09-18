#ifndef LAPTOP_H
#define LAPTOP_H
#include "Resource.h"

class Laptop:public Resource {
    double hourlyRate; 
    int hoursUsed; 

    public:
        Laptop(int i, const string& n, double r, int u);
        double usageCost() const override;
        void display() const override;
};
#endif
