#pragma once
#include "vehicle.h"
using namespace std;

class car : public vehicle {
   
    double rentalPrice;
    string status;
    string type="Car";

public:
    car():vehicle(){
        rentalPrice=0;
        status="Available";
        
    }
    car(string n, string np , double price, string s):vehicle(n,np){
        rentalPrice=price;
        status=s;
        
    }
    void display() ;

    double tellprice() ;
    string tellstatus() ;
    void updatestatus(string s) ;
   
    string getvehicletype(){
        return type;
    }
   
   
};
