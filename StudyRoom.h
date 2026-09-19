#ifndef STUDYROOM_H
#define STUDYROOM_H
#include "Resource.h"

class StudyRoom:public Resource {
    int occupancy;
    double reservationFee;

    public:
        StudyRoom(int i, const std::string& n, int o, double r);
        double usageCost() const override;
        void display() const override;
};
#endif
