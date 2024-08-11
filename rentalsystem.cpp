
#include "rentalsystem.h"
#include <fstream>
using namespace std;

rentalsystem::~rentalsystem() {
    for (int i = 0; i < 21; ++i) {
        delete V[i];
    }
}


void rentalsystem::read() {
    ifstream ifile("input.txt");
    string s1, s2, s3, s4, s5, s6, s7;
      for (int i=0 ; i<21 ; i++){
        getline(ifile, s1, ',');
        getline(ifile, s2, ',');
        getline(ifile, s3, ',');
        getline(ifile, s4, ',');
        getline(ifile, s5);
       

        if (s1 == "C") {
            V[i] = new car(s2, s3, stod(s4), s5);
            iscar[i] = true;
        } else {
            V[i] = new truck(s2, s3, stof(s4), s5);
            iscar[i] = false;
        }

        V[i]->display();
       
    }

    ifile.close();
}


void rentalsystem::storeinfile()
{
    ofstream file("output.txt");
    for (int i = 0; i < 21; i++)
    
    {    file<<"-----------Vehicles---------"<<endl;
            file << "Name : " << V[i]->tellname() << endl;
            file << "No plate : " << V[i]->tellnp() << endl;
       
        if (iscar[i]) 
        {
            
            file<<  "Price: "<<V[i]->tellprice()<<endl;
            file << "Status: " << V[i]->tellstatus() << endl;
            file << endl << endl;
        }
        else
        {  
           
            file << "Price : " << V[i]->tellprice() << endl;
            file<<" Status : "<<V[i]->tellstatus()<<endl;
            file << endl << endl;
        }
    }
    file.close();
}

void rentalsystem::display(int n) {
    for (int i = 0; i < 21; ++i) {
        if ((n == 1 && iscar[i]) || (n == 2 && !iscar[i])) {
            V[i]->display();
        }
    }
}


void rentalsystem::searchbyname() {
    bool found = false;
    string a;
    cin.ignore();
    cout << "Enter name of car : ";
    getline(cin,a);
    for (int i = 0; i < 21; i++) { 
        if (a == V[i]->tellname()) {
            V[i]->display();
            found = true;
        }
    }
    if (!found)
        cout << "Please... Enter VALID NAME." << endl;
}




void rentalsystem::searchbynp()
{
    bool found = false;
    string n;
        cout << "Enter no plate : ";
        cin >> n;
        for (int i = 0; i < 21 &&!found; i++)
        {
            if (n == V[i]->tellnp())
            {
                V[i]->display();
                found = true;
            }
        }
        if (!found)
            cout << "Please... Enter VALID ID." << endl;
}



void rentalsystem::available() {
    for (int i = 0; i < 21; ++i) 
         {
            if ( V[i]->tellstatus() == "Available")  
                V[i]->display();
            
         }}
       

void rentalsystem::notavailable() {
    for (int i = 0; i < 21; ++i) {
        
            if ( V[i]->tellstatus() != "Available") 
                V[i]->display();
            
       
    }
}



void rentalsystem::rentvehicle() {
    string rentId;
    cout << "Enter the no plate of the vehicle to rent: ";
    cin >> rentId;
    bool found = false;

    for (int i = 0; i < 21 && !found; ++i) {
        if (V[i]->tellnp() == rentId) {
            V[i]->display();
            if (V[i]->tellstatus() == "Available") {
                V[i]->updatestatus("Not Available");
                cout << "Vehicle rented successfully." << endl;
                updatefile();
            } else {
                cout << "Vehicle is not available for rent." << endl;
            }
            found = true;
        }
    }

    if (!found) {
        cout << "Vehicle with ID " << rentId << " not found." << endl;
    }
}



void rentalsystem::returnvehicle() {
    string returnnp;
    cout << "Enter the no plate of the vehicle to return: ";
    cin >> returnnp;

    bool found = false; 

    for (int i = 0; i < 21 && !found; ++i) {
        if (V[i]->tellnp() == returnnp) {
            V[i]->display();
            if (V[i]->tellstatus() != "Available") {
                V[i]->updatestatus("Available");
                cout << "Vehicle returned successfully." << std::endl;
                updatefile();
            } else {
                cout << "Vehicle is already available." << std::endl;
            }
            found = true;
        }
    }

    if (!found)
        cout << "Vehicle with no plate " << returnnp << " not found." << endl;
}

void rentalsystem::updatefile()
{
    ofstream file("input.txt");
    for (int i = 0; i < 21; i++)
    {
        if (iscar[i])
        {
            file << "C," << V[i]->tellname() << "," << V[i]->tellnp() << ","
                << V[i]->tellprice() << "," << V[i]->tellstatus()  << endl;
        }
        else if(!iscar[i])
        {
            file << "T," << V[i]->tellname() << "," << V[i]->tellnp() << ","
                 <<  V[i]->tellprice() << ","
                << V[i]->tellstatus() << endl;
        }
    }
    file.close();
}



