#include "car.h"
#include <iostream>
using namespace std;


void car::display() {
     cout<<"------------Car-----------"<<endl;
    vehicle::display();
   
    cout << "\tRENTAL PRICE: " << rentalPrice << std::endl;
    cout << "\tSTATUS: " << status << std::endl;
    cout << std::endl << std::endl;
}




double car::tellprice() {
    return rentalPrice;
}

std::string car::tellstatus() {
    return status;
}

void car::updatestatus(string s) {
    
    status = s;
}
 
