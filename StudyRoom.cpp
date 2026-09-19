#include "StudyRoom.h"

    StudyRoom::StudyRoom(int i, const std::string& n, int o, double r):Resource(i, n) {
        occupancy = o;
        reservationFee = r;
    }
    
    void StudyRoom::display() const {
        cout << "Study Room" << endl;
        cout << endl << "ID: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Occupancy: " << occupancy << endl;
        cout << "Reservation Fee $: " << reservationFee << endl;
        cout << "Cost: $" << usageCost() << endl;
    }
    double StudyRoom::usageCost() const {
        double cost;
        cost = reservationFee * occupancy;
        return cost;
    }
