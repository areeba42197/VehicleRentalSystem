#include "vehicle.h"
#include <iostream>
using namespace std;


void vehicle::display() {
    cout << "\tNAME: " << name << std::endl;
    cout << "\tNo plate : " << noplate << std::endl;
}
