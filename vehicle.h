#pragma once
#include <iostream>
#include <string>
using namespace std;

class vehicle {
protected:
    string name;
    string noplate;

public:
    vehicle(){
        
        name=" ";
        noplate=" ";
    }
    vehicle(string n, string np){
        name=n;
        noplate=np;
    }
    
    virtual void display();
    virtual string getvehicletype()=0;
    virtual double tellprice()  = 0;
    virtual string tellstatus()  = 0;
    virtual void updatestatus(string s) = 0;
  
    string tellname(){
        return name;
    }
    string tellnp(){
        return noplate;
    }
    
    
};
