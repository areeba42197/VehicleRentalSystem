#include "truck.h"
using namespace std;


void truck::display() {
    cout<<endl<<"------------Truck ------------"<<endl;
    vehicle::display();
   
    cout<<"\tPrice :"<<price<<std::endl;
    cout <<"\tSTATUS: " << status << std::endl;
    cout << std::endl << std::endl;
}



double truck::tellprice()  {
    return price; 
}

std::string truck::tellstatus() {
    return status;
}

void truck::updatestatus(string s) {
    
    status = s;
}




