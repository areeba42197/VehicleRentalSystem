#include <iostream>
#include "rentalsystem.h"
using namespace std;
int main() {
    rentalsystem r;
    r.read();
    int choice;
    do {
        cout << "\n***** Vehicle Rental System *****\n";
        cout << "1. Display Vehicles\n";
        cout << "2. Search by name\n";
        cout << "3. Search by ID\n";
        cout << "4. Rent a Vehicle\n";
        cout << "5. Return a Vehicle\n";
        cout << "6. Display Available Vehicles\n";
        cout << "7. Display Unavailable Vehicles\n";
        cout<<  "8. Write in file\n";

        
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                r.read();
                break;
           
            case 2:
                r.searchbyname();
                break;
            case 3:
                r.searchbynp();
                break;
            case 4:
                r.rentvehicle();
                break;
            case 5:
                r.returnvehicle();
                break;
            case 6:
                r.available();
                break;
            case 7:
                r.notavailable();
                break;
           case 8:
                r.storeinfile();
                break;
            case 0:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}

