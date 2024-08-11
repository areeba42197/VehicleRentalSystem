#pragma once
#include "vehicle.h"
#include "car.h"
#include "truck.h"
#include <fstream>

class rentalsystem {
   
    vehicle* V[21];
    bool iscar[21];

public:
   
    ~rentalsystem();
    void read();
    void display(int n);
    void searchbyname();
    void searchbynp();
    void available();
    void notavailable();
    void rentvehicle();
    void returnvehicle();
    void storeinfile();
    void updatefile();
};
