#pragma once
#include "vehicle.h"
using namespace std;


class truck : public vehicle {
    
    string status;
    
    float price ;
    string type="Truck";
    

public:
    truck():vehicle(){
        price=0;
        
        status="Available";
    }
    truck(string n, string np, float p, string s):vehicle(n,np){
        
        status=s;
        price=p;
    }
    void display() ;
  
    double tellprice() ;
    string tellstatus() ;
    void updatestatus(string s) ;
   
    string getvehicletype(){
        return type;
    }
   
};
