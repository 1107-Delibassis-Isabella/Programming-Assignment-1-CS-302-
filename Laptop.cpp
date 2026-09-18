#include "Laptop.h"

    Laptop::Laptop(int i, const std::string& n, double r, int u):Resource(i, n) {
        hourlyRate = r;
        hoursUsed = u;
    }
    void Laptop::display() const {
        cout << "Laptop" << endl;
        cout << endl << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Hours Used: " << hoursUsed << endl;
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Cost: $" << usageCost() << endl;
    }
    double Laptop::usageCost() const {
        double cost;
        cost = hourlyRate * hoursUsed;
        return cost;
    }
